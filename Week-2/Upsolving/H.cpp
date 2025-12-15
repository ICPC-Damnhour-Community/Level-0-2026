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
    unsigned long long n ; cin >> n ;
    if (n <= 127) {
        cout << "byte" ;
    }
    else if (n <= 32767) {
        cout << "short" ;
    }
    else if (n <= 2147483647) {
        cout << "int" ;
    }
    else if (n <= 9223372036854775807) {
        cout << "long" ;
    }
    else if (n > 9223372036854775807) {
        cout << "BigInteger" ;
    }
    
    
    
    
    
    
    return 0 ;
}