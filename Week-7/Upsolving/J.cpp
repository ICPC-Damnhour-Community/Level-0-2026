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

void solve() 
{
    int t[3][3] ;
    bool b[3][3] ;
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cin >> t[i][j] ;
            b[i][j] = 1 ;
        }
    }
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if (t[i][j] % 2 == 1) {
                b[i][j] = !b[i][j] ;
                if (i != 0) b[i-1][j] = !b[i-1][j] ;
                if (i != 2) b[i+1][j] = !b[i+1][j] ;
                if (j != 0) b[i][j-1] = !b[i][j-1] ;
                if (j != 2) b[i][j+1] = !b[i][j+1] ;
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cout << b[i][j] ;
        }
        cout << endl ;
    }
}

int32_t main () 
{
    fast 
    int t = 1 ; //cin >> t ;
    while (t--){
        solve() ;
    }
    
    
    
    
    
    
    
    return 0 ;
}
