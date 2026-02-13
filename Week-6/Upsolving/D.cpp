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
    while (n--) {
        str s ; cin >> s ;
        sort(s.begin() , s.end()) ;
        bool flag = 1 ;
        if (s.size() > 1) {
            for (int i = 0 ; i < s.size() - 1 ; i++) {
                if (s[i+1] - s[i] != 1) {
                    flag = 0 ;
                    break ;
                }
            }
        }
        if (flag) cout << "Yes\n" ;
        else cout << "No\n" ;
    }
    
    
    
    
    
    
    
    return 0 ;
}