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
    int k ; cin >> k ;
    str s = "codeforces" ;
    int arr[10] ;
    for (int i = 0 ; i < 10 ; i++) {
        arr[i] = 1 ;
    }
    int pru = 1 ;
    for(int i = 0 ; ((i < 10) && (pru < k)) ; i++) {
        pru /= arr[i] ;
        arr[i]++ ;
        pru *= arr[i] ;
        if (i == 9) i = -1 ;
    }
    for (int i = 0 ; i < 10 ; i++) {
        for(int j = 0 ; j < arr[i] ; j++) {
            cout << s[i] ;
        }
    }
    
    
    
    
    
    
    
    return 0 ;
}