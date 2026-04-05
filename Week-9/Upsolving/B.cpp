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


int trucks(int n , int l) {
    if (n <= l) return 1 ;
    return trucks(n/2 , l) + trucks((n+1)/2 , l) ;
}
/*  (4+1)/2 = 2
    (5+1)/2 = 3
*/


void solve() 
{
    int n , l ;
    while (cin >> n >> l)
    {
        cout << trucks(n,l) << endl ;
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
