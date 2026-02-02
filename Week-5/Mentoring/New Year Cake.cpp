#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
const int N = 500 + 5, M = N, MOD = 1e9 + 7;

int layers(int a , int b) {
    int cnt = 0 , need = 1 , turn = 1;
    while(1) {

        if (turn) {
            if (a >= need) a -= need;
            else break;
        }
        else {
            if (b >= need) b -= need;
            else break;
        }
        turn = !turn;
        need *= 2;
        cnt++;
    }
    return cnt;
}

void solve() {
    int a, b ; cin >> a >> b;
    int res = max(layers(a , b) , layers(b , a));
    cout << res << endl;
}

signed main() {
    fast
    int t = 1 ;
    cin >> t;
    while(t--){
        solve();

    }
}
