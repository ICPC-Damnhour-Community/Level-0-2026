#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n" 
// #define int long long
#define ll long long
// #define str string

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




int32_t main () 
{
    fast 
    int t ; cin >> t ; 
    for (int i = 1 ; i <= t ; i++) {
        int a , b ; cin >> a >> b ;
        int res = 0 ;
        for(int j = a ; j <= b ; j++) {
            if(j % 2 == 1) {
                res += j ;
            }
        }
        cout << "Case " << i << ": " << res << endl ;
        
    }
    
    
    
    
    
    
    return 0 ;
}