#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
const int N = 500 + 5, M = N, MOD = 1e9 + 7;
bool cmp(string s1 , string s2) {
    return (s1+s2 < s2+s1);
}
void solve() {
    int n ; cin >> n;
    string a[n]; for (string &s : a) cin >> s;
    sort(a , a+n , cmp);
    for (string s : a) cout << s;
}

signed main() {
    fast
    int t = 1 ;
    // cin >> t;
    while(t--){
        solve();

    }
}
