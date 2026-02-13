#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
// #define int long long
const int OO = static_cast<int>(1e17);
const int N = 1000 + 5, M = N, MOD = 1e9 + 7;
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

void solve() {
    int n  , k; cin >> n >> k;
    string s; cin >> s;
    // a
    int ans = 0 ;
    for (char c = 'a' ; c <= 'z' ; c++) {
        int x = 0 , cnt = 0;
        for (int i = 0 ; i<n ;i++) {
            if (s[i] == c) x++;
            else if (s[i] != c) x = 0;
            if (x == k) {
                cnt++ , x = 0;
            }
        }
        ans = max(ans , cnt);
    }
    cout << ans << endl;
}


signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--){
        solve();

    }
}