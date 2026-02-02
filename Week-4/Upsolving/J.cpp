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
    int t ; cin >> t ; 
    while (t--) {
        int n , k ; cin >> n >> k ;
        int a[n] , b[n] ;
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i] ;
        }
        for (int i = 0 ; i < n ; i++) {
            cin >> b[i] ;
        }
        sort(a , a+n) ; sort(b , b+n) ; reverse(b , b+n) ;
        for (int i = 0 ; i < k ; i++) {
            if (b[i] <= a[i]) {
                break ;
            }
            a[i] = b[i] ;
        }
        // for (int i = 1 ; i < n ; i++) {
        //     a[i] += a[i-1] ;
        // }
        // cout << a[n-1] << endl ;
        int sm = 0 ;
        for (int i = 0 ; i < n ; i++) {
            sm += a[i] ;
        }
        cout << sm << endl ;
    }
    
    
    
    
    
    return 0 ;
}