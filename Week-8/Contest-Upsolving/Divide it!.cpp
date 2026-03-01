#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int  t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        int cnt = 0 ;
        while(n != 1){
            if(n % 2 == 0) n /= 2 ;
            else if(n % 3 == 0){
                n *= 2 ;
                n /= 3 ;
            }
            else if(n % 5 == 0){
                n *= 4 ;
                n /= 5 ;
            }
            else{
                cnt = -1;
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}