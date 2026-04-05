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
string grid[2];
int len;
bool rec(int i , int j) {
    if (j == len) return i;

    if (grid[i][j] <= '2') return rec(i , j+1);
    if (grid[i][j] >= '3') return (grid[!i][j] >= '3' ? rec(!i , j+1)  : false);

}

void solve() {
    cin >> len;
    cin >> grid[0] >> grid[1];
    cout <<( rec( 0 , 0 ) ? "YES\n" : "NO\n");
}

signed main() {
    pre();
    int t = 1 ;
    cin >> t;
    while(t--){
        solve();

    }
}