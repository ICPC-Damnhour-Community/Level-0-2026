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

int fib(int a , int b , int n) {
    if (n % 3 == 0) return a ;
    else if (n % 3 == 1) return b ;
    else return a ^ b ;
}


void solve() 
{
    int a , b , n ; cin >> a >> b >> n ;
    cout << fib(a,b,n) << endl ;
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
