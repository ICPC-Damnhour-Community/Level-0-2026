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
    int t ; cin >> t ;
    while (t--) {
        int h , m ; char c ; string ap ;
        cin >> h >> c >> m ;
        if (h >= 12) ap = "PM" ;
        else ap = "AM" ;
        if(h % 12) h %= 12 ;
        else h = 12 ;
        if (h < 10) cout << 0 ;
        cout << h << c ;
        if (m < 10) cout << 0 ;
        cout << m << " " << ap << endl ; 
    }
    
    
    
    
    
    
    return 0 ;
}