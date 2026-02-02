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
    int x[n] , y[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> x[i] >> y[i] ;
    }
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++) {
        bool flag_xr = 0 , flag_xl = 0 , flag_yd = 0 , flag_yu = 0 ; 
        for(int j = 0 ; j < n ; j++) {
            if (i == j) {
                continue ;
            }
            else {
                if (x[j] > x[i] && y[j] == y[i]) {
                    flag_xr = 1 ;
                }
                if (x[j] < x[i] && y[j] == y[i]) {
                    flag_xl = 1 ;
                }
                if (y[j] > y[i] && x[j] == x[i]) {
                    flag_yu = 1 ;
                }
                if (y[j] < y[i] && x[j] == x[i]) {
                    flag_yd = 1 ;
                }
            }
        }
        if (flag_xl && flag_xr && flag_yd && flag_yu) {
            cnt++;
        }
    }
    cout << cnt ; 
    
    
    
    
    return 0 ;
}
