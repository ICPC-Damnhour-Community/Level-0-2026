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
    str s = "ROYGBIV" ; // GBIV YGBI ROYG
    int t = n / 7 ;
    str s2 ;
    for (int i = 0 ; i < t ; i++) {
        s2 += s ;
    }
    int r = n % 7 ;
    if (r == 1) s2 += 'G' ;
    if (r == 2) s2 += "GB" ;
    if (r == 3) s2 += "YGB" ;
    if (r == 4) s2 += "YGBI" ;
    if (r == 5) s2 += "YGBIV" ;
    if (r == 6) s2 += "OYGBIV" ;
    cout << s2 ;
    
    
    
    
    
    
    
    
    return 0 ;
}