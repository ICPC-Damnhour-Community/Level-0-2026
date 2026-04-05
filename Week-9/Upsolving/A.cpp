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

int R_SUM(int arr[] , int n) {
    if (n == 0) return 0 ;
    return arr[n-1] + R_SUM(arr,n-1) ;
}


int t = 1 ;
void solve() 
{
    int n ; cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ;i++) cin >> arr[i] ;
    cout << "Case " << t << ": " << R_SUM(arr , n) << endl ;
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
