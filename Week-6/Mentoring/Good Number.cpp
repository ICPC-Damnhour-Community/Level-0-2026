#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define int long long
void pre() {
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
const int OO = static_cast<int>(1e17);
const int N = 1000 + 5, M = N, MOD = 1e9 + 7;
int dx[] = {1, -1 , 0 , 0 , 0 , 0 };
int dy[] = {0 , 0 , 1 , -1 , 0 , 0};
int dz[] = {0 , 0 , 0 , 0 , 1 , -1};

void solve() {
    int n , k ; cin >> n >> k;
    int ans = 0 ;
    while (n--) {
        string s ; cin >> s;
        bool exist[10];
        memset(exist , false , sizeof exist);
        for (int i = 0; i<s.size() ;i++) {
            exist[s[i] - '0'] = true;
        }
        bool good = true;
        for (int i = 0 ; i<=k ;i++) {
            if (!exist[i]) good = false;
        }
        ans += good;
    }
    cout << ans << endl;

}


signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--) solve();
}
