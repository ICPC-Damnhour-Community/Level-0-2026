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

int mini(int n , int m ) {
    int sum_a = 0 , sum_b = 0 , cnt = 0 ;
    int a[n] , b[n] , diff[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] >> b[i] ; 
        diff[i] = a[i] - b[i] ;
        sum_a += a[i] ; sum_b += b[i] ;
    }
    if (sum_a <= m) {
        return 0 ;
    }
    else if (sum_b > m) {
        return -1 ;
    }
    else {
        sort(diff , diff+n) ; reverse(diff , diff+n) ;
        for (int i = 0 ; ((i < n) && (sum_a > m)) ; i++ ) {
            sum_a -= diff[i] ;
            cnt++ ;
        }
        return cnt ;
    }

}

int32_t main () 
{
    fast 
    int n , m ; cin >> n >> m ;
    cout << mini(n,m) ;
    
    
    
    
    
    return 0 ;
}