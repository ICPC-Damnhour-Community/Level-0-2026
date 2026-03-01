#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t ; cin >> t ;
    while(t--){
        ll n , p , q ;
        cin >> n >> p >> q ;
        ll a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        ll sa = 0 , sb = 0 ;
        sort(a , a + n);
        for(int i = n - 1 , cnt = 0 ; i >= 0 && cnt < p ; i--){
            if(a[i] > 0){
                sa += a[i] ;
                cnt++;
            }
        }
        for(int i = 0 , cnt = 0 ; i < n && cnt < q ; i++){
            if(a[i] < 0){
                sb += a[i] ;
                cnt++;
            }
        }
        cout << sa - sb << endl;

    }
    return 0;
}