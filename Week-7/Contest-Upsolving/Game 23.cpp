#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m;
    int cnt = -1 ;
    if(m % n == 0){
        cnt = 0 ;
        // 2 5 -> edge case
        int d = m / n ;
        while(d % 2 == 0){
            d /= 2;
            cnt++; 
        } 
        while(d % 3 == 0){
            d /= 3;
            cnt++;
        } 
        if(d != 1) cnt = -1 ;
    }
    cout << cnt << endl;
    return 0 ;
}
