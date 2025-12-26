#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        int cnt = 0 ;
        if(n == 1) {
            cnt = 0 ;
        }
        else{
            while(n != 1){
                if(n % 3 != 0){
                    cnt = -1 ;
                    break;
                }
                else if(n % 6 == 0){
                    n /= 6 ;
                }
                else{
                    n *= 2 ;
                }
                cnt++;
            }
        }
        cout << cnt << endl ;
    }
    return 0;
}