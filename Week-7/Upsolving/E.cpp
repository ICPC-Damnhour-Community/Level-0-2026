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
    str s , s2 ; getline(cin,s) ;
    for(int i = 0 ; i <s.size() ; i++) {
        if(isalpha(s[i])) s2 += s[i] ;
    }
    if (s2.size() == 0) {
        cout << 0 ; return ;
    }
    sort(s2.begin() , s2.end()) ;
    int cnt = 1 ;
    for(int i = 0 ; i <s2.size()-1 ; i++) { // aabb
        cnt += (s2[i] != s2[i+1]) ;
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
