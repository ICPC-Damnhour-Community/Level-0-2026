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
    int n , m ; cin >> n >> m ;
    if (m % n != 0) {
        cout << -1 ;
        return ;
    }
    int d = m / n , mo = 0 ;
    while (d % 3 == 0) {
        d /= 3 ;
        mo++ ;
    }
    while (d % 2 == 0) {
        d /= 2 ;
        mo++ ;
    }
    if (d == 1) cout << mo ;
    else cout << -1 ;
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
