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
    int h[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> h[i] ;
    }
    int def = 10000 , f , s ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (i == j) {
                continue ;
            }
            else {
                if ((abs(h[i] - h[j]) <= def ) && ((abs(i- j) == n-1 ) || (abs(i-j) == 1)))  {
                    def = abs((h[i] - h[j])) ;
                    f = i+1 , s = j+1 ;
                }
            }
        }
    }
    cout << f << " " << s ;
    
    
    
    
    
    return 0 ;
}