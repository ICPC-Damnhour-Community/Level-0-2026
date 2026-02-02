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
    int arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int m ; cin >> m ;
    while (m--) {
        int x , y ; cin >> x >> y ; x-- ;
        if (x > 0) {
            arr[x-1] += y -1 ;
        }
        if (x < n-1) {
            arr[x+1] += arr[x] - y ;
        }
        arr[x] = 0 ;
    }
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << endl ;
    }
    
    
    
    
    
    return 0 ;
}
