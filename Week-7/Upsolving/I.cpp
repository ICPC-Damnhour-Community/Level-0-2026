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
    str s ;
    while(getline(cin , s) && s != "DONE") {
        str s2 ;
        for(int i = 0 ; i < s.size() ; i++) if(isalpha(s[i])) s2 += toupper(s[i]) ;
        str s3 = s2 ;
        reverse(s3.begin() , s3.end()) ;
        if (s2 == s3) cout << "You won't be eaten!\n" ;
        else cout << "Uh oh..\n" ;
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
