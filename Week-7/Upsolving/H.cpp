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
    str s ; cin >> s ;
    int n = 0 , sz = s.size() ;
    for(int i = 0 ; i < sz ; i++) n += (s[i] != '0') ;
    cout << n << endl ;
    for (int i = 0 ; i < sz ; i++) {
        if(s[i] != '0') { // sz-1 -i
            str s2(sz-1 -i,'0') ;
            cout << s[i] << s2 << " " ;
        }
    }
    cout << endl ; 
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
