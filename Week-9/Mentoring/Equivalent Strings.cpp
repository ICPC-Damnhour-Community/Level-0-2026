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
string s1 , s2;

string rec(string a) {

    if (a.size()%2) {
        return a;
    }
    string a1 = a.substr(0 , a.size()/2);
    string a2 = a.substr(a.size()/2);

    string t1 = rec(a1);
    string t2 = rec(a2);

    if (t1 < t2) {
        return t1 + t2;
    }else {
        return t2 + t1;
    }

}
void solve() {
    cin >> s1 >> s2;
    cout << (rec(s1) == rec(s2) ? "YES" : "NO") << endl;


}

signed main() {
    pre();
    int t = 1 ;
    // cin >> t;
    while(t--){
        solve();

    }
}