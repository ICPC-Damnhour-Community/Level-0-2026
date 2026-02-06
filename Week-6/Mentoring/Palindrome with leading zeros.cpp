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
    string s ; cin >> s;
    while (s.back() == '0') s.pop_back();
    bool ispal = true;
    // for (int i = 0 ; i<s.size() ;i++) {
    //     ispal &= (s[i] == s[s.size()-i-1]);
    // }
    // cout << (ispal ? "YES\n" : "NO\n");
    int l = 0 , r = s.size()-1;
    cerr << s << " " << s.size() << endl;
    while (l <= r) {
        if (s[l++] != s[r--]) ispal = false;
    }
    cout << (ispal ? "Yes\n" : "No\n");

}


signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--) solve();
}