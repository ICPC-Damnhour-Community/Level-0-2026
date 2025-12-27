#include <bits/stdc++.h>
#define tests int t; cin >> t; while(t--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
constexpr int N = 1e6+1 , mod = 1e9+7;
void IP ()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}
int32_t main()
{
    IP();
    fast
    int n , m; cin >> n >> m;
    int k1 , k2; cin >> k1 >> k2;
    int a[n] , b[m];
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    cout << (a[k1 - 1] < b[m - k2] ? "YES" : "NO");
}