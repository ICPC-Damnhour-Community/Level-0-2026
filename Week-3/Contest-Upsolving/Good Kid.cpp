#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        ll pro = 1 , mn = 10 , ans = 0 , cnt0 = 0 ;
        for(int i = 0 ; i < n ; i++){
            ll x ; cin >> x ;
            if(x == 0) cnt0++ ;
            else{
                pro *= x ;
                if(x < mn){
                    mn = x ;
                }
            }
            if(cnt0 > 1){
                ans = 0 ;
            }
            else if(cnt0 == 1){
                ans = pro ;
            }
            else{
                ans = (pro / mn) * (mn + 1) ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}