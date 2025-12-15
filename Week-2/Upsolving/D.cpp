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
    int x , y ; cin >> x >> y ;
    // 1 3 5 7 8 10 12
    if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)&&(y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)) {
        cout << "Yes" ;
    }
    // 4 6 9 11
    else if ((x == 4 || x == 6 || x == 9 || x == 11)&&(y == 4 || y == 6 || y == 9 || y == 11)) {
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    
    
    
    
    
    
    return 0 ;
}