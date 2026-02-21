#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        long long w , b ;
        cin >> w >> b ;
        long long  k = w + b ;
        long long ans = (-1 + sqrt(1 + 8 * k)) / 2 ;
        cout << ans << endl ;
    }
    return 0 ;
}
