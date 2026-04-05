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
    int sz = s.size() , cnt = 0 ;
    for (int i = 0 ; i < sz - 2 ; i++) {
        if (s[i] == 'Q') {
            for (int j = i + 1 ; j < sz ; j++) {
                if (s[j] == 'A') {
                    for (int k = j + 1 ; k < sz ; k++) {
                        if (s[k] == 'Q') cnt++ ;
                    }
                }
            }
        }
        
    }
    cout << cnt ; 
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
