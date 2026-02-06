#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b , n ;
    cin >> a >> b >> n ;
    int cnt = 0 ;
    while(cnt < 10){
        int num = a * 10 + cnt ;
        if(num % b == 0){
            cout << num ;
            for(int i = 1 ; i < n ; i++){
                cout << 0 ;
            }
           return 0 ;
        }
        cnt++;
    }
    cout << -1 ;
    return 0 ;
}
