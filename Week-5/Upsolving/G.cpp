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

int mini(int arr[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int x = count(arr,arr+n,1) ; 
    if(x == 0) {
        return 1 ;
    }
    return -1 ;
}


int32_t main () 
{
    fast 
    int n ; cin >> n ;
    int arr[n] ;
    cout << mini(arr,n) ;
    
    
    
    
    
    return 0 ;
}