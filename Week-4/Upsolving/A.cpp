#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n" 
//#define int long long
#define ll long long
#define str string

ll FP(ll base , ll p ){
    if (p == 1) {
        return base ;
    }
    ll ans = FP(base , p/2) ;
    if (p % 2 == 0){
        return ans * ans ;
    }
    else {
        return base * ans * ans ;
    }
    
}

// double x ;
// cout <<fixed<< setprecision(9) << x  ;



int32_t main () 
{
    fast 
    int n ; cin >> n ;
    int arr[n] ;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
        sum += arr[i] ; // 5
    }
    sort(arr,arr+n) ; // 1 2 2
    reverse(arr,arr+n) ; // 2 2 1
    int my = 0 , cnt = 0 ;
    for (int i = 0 ; i < n ; i++) { //
        if(my > (sum-my)) {
            break ;
        }
        else {
            my += arr[i] ; // 4
            cnt++ ; // 2
        }
    }
    cout << cnt ;
    
    
    
    
    return 0 ;
}
