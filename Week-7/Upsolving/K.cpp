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

int t = 1 ;
void solve() 
{
    char o,p ; cin >> o >> p ;
    int n ; cin >> n ;
    int arr[n][n] ;
    for (int i = 0 ; i < n ; i++) for (int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
    bool flag = 1 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (arr[i][j] != arr[n-1-i][n-1-j] || arr[i][j] < 0) {
                flag = 0 ;
                break ;
            }
        }
    }
    if (flag) cout << "Test #" << t << ": Symmetric.\n" ;
    else cout << "Test #" << t << ": Non-symmetric.\n" ;
    t++ ;
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
