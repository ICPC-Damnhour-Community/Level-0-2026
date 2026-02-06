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
    if (s.find("AB" , 0) != string::npos && s.find("BA" , s.find("AB" , 0) + 2) != string :: npos) {
        cout << "YES\n";
        return;
    }
    if (s.find("BA" , 0) != string::npos && s.find("AB" , s.find("BA" , 0) + 2) != string :: npos) {
        cout << "YES\n";
        return;
    }
    else cout << "NO\n";

}


signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--) solve();
}