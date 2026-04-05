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
    int k ; cin >> k ;
    int mn = 0 , mx = 0 ;
    str s2 , s3 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] == '?') mn-- ;
        else if (s[i] == '*') {
            mn-- ; mx = 200 ;
        }
        else {
            s2 += s[i] ;
            mn++ ; mx++ ;
        }
    }
    if (k < mn || k > mx) {
        cout << "Impossible" ;
        return ;
    }
    int diff = s2.size() - k ;
    int dif = abs(diff) ;
    if (s2.size() == k) {
        cout << s2 ;
        return ;
    }
    else if (s2.size() > k) {
        for (int i = 0 ; i < s.size() ; i++) {
            if((dif != 0) && (s[i+1] == '?' || s[i+1] == '*')) {
                i++ ;
                dif-- ;
            }
            else if (isalpha(s[i])) s3 += s[i] ;
        }
    }
    else {
        bool flag = 1 ;
        for(int i = 0 ; i < s.size() ; i++) {
            if(flag && s[i+1] == '*') {
                s3.append(dif+1,s[i]) ;
                flag = 0 ;
            }
            else if (isalpha(s[i])) s3 += s[i] ;
        }
    }
    cout << s3 ;
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
