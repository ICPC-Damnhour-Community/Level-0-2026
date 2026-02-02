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
        int n , cnt = 0 ; cin >> n ;
        int a[n] ;
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i] ;
        }
        for (int i = 0 ; i < n ; i++) {
            int l = i , r = i ;
            while((r < n-1) && (a[r] == a[r+1])) {
                r++;
            }
            if (((l == 0) || (a[l] < a[l-1])) && ((r == n-1) || (a[r] < a[r+1]))) {
                cnt++ ;
            }
            i = r ;
        }
        if(cnt == 1) {
            cout << "YES\n" ;
        }
        else {
            cout << "NO\n" ;
        }
    }
    
    
    
    
    
    return 0 ;
}