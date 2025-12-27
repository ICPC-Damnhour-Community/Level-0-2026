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
    int i , j ;
    while (cin >> i >> j) {
        int mx = max(i,j) , mn = min(i,j) ;
        int maxi = 0 ;
        for(int k = mn ; k <= mx ; k++) {
            int cnt = 1 , tem = k ;
            while (tem != 1) {
                if (tem % 2) {
                    tem *= 3 , tem++ ;
                }
                else tem /= 2 ;
                cnt++;
            }
            maxi = max(maxi,cnt) ;
        }
        cout << i << " " << j << " " << maxi << endl ;
    }
    
    
    
    
    
    return 0 ;
}