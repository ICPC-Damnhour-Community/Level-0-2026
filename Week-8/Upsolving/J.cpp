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
    int n ; cin >> n ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++) cin >> arr[i] ;
    int c = 0 ;
    for(int i = 0 ; i < n ; i++) {
        int z = 0 ;
        for (int j = i ; j < n ; j++) {
            c += j - i + 1 ; 
            z += (arr[j] == 0) ;
            c += z ;
        }
    }
    cout << c << endl ;
}

int32_t main () 
{
    fast 
    int t = 1 ; cin >> t ;
    while (t--){
        solve() ;
    }
    
    
    
    
    
    
    
    return 0 ;
}
