#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n" 
#define int long long
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
    int arr[7] ;
    for (int i = 0 ; i < 7 ; i++) {
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < 7 ; i++) {
        n-= arr[i] ;
        if (n > 0) {
            if (i == 6) {
                i= -1 ;
            }
        }
        else {
            cout << i+1 ;
            break ;
        }
        
    }
    
    
    
    
    
    return 0 ;
}
