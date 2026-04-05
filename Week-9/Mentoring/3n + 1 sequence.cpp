#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define int long long
const int OO = static_cast<int>(1e17);
const int N = 400 + 5, M = N, MOD = 1e9 + 7;
int dx[] = {1, -1 , 0 , 0 , 0 , 0 };
int dy[] = {0 , 0 , 1 , -1 , 0 , 0};
int dz[] = {0 , 0 , 0 , 0 , 1 , -1};
void pre() {
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int rec(int n) {
    if (n == 1) return 1;
    cerr << n << endl;
    if (n % 2 != 0) return rec(n*3+1) + 1;
    else return rec(n / 2) + 1;
}
void solve() {
    int n ; cin >> n;

    // int cnt = 1;
    // int t = n;
    // while (n != 1) {
    //     // odd
    //     if (n%2 != 0) n = n * 3 + 1;
    //     // even
    //     else n /= 2;
    //     cnt++;
    // }
    // cout << res << endl;
    cout << rec(n) << endl;
    // cout << cnt << endl;
}

signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--){
        solve();

    }
}