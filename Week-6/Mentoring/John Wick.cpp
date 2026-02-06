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
    int n , m ; cin >> n >> m;
    string s ; cin >> s;
    int t = count(s.begin() , s.end() , '.');
    m = min(m , t);
    t = m;
    string ans = "";
    for (int i = 0 ; i<n ;i++) {
        if (s[i] != '.') {
            ans += s[i];
        }
        else if (s[i] == '.' and m) {
            m--;
        }
        else if (s[i] == '.' and m == 0) {
            ans+='.';
        }
    }
    while (t--) {
        cout << '.';
    }
    cout << ans ;


}


signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--) solve();
}