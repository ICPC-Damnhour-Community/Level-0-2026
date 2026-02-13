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
    int n , k ; cin >> n >> k ;
    int cnt = 0 ;
    while (n--) {
        str s ; cin >> s ;
        bool flag = 1 ;
        for (int i = 0 ; i <= k ; i++) {
            if (s.find(char(i+'0')) == string::npos ) {
                flag = 0 ;
                break ;
            }
        }
        if (flag) cnt++ ;
    }
    cout << cnt ;
    
    
    
    
    
    
    
    return 0 ;
}