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
    string s; cin >> s;
    // a
    if (s.size() == 1) {
        cout << -1 << endl;
        return;
    }
    // baa
    for (int i = 0 ; i<s.size()-1 ;i++) {
        if (s[i] == s[i+1]) {
            cout << s.substr(i , 2) << endl;
            return;
        }
    }
    for (int i = 0 ; i<s.size()-2 ;i++) {
        if (s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]) {
            cout << s.substr(i , 3) << endl;
            return;
        }
    }
    cout << -1 << endl;
}


signed main() {
    pre();
    int t = 1 ;
    cin >> t;
    while(t--){
        solve();

    }
}