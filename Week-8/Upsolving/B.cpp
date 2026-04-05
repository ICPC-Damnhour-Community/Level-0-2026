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
    int d ; cin >> d ;
    double a , b ;
    a = (d + sqrt(d*d - 4*d)) / 2 ;
    b = (d - sqrt(d*d - 4*d)) / 2 ;
    if (d < 4 && d != 0) cout << "N \n" ;
    else cout << fixed<< setprecision(9) << "Y " << a << " " << b << endl ;
}

int32_t main () 
{
    fast 
    int t = 1 ; cin >> t ;
    while (t--){
        solve() ;
    }
    
    
    
    
    
    
    
    return 0 ;
}
