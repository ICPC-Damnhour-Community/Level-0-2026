#include <bits/stdc++.h>
#define tests int t; cin >> t; while(t--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long
#define endl '\n'
using namespace std;
int dx[] {1 , -1 , 0 , 0};
int dy[] {0 , 0 , 1 , -1};
constexpr int N = 305 , Mod = 1e9+7;
constexpr double PI = 3.141592653589793;
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
    tests
    {
        int n; cin >> n;
        int a[n]; for (int &i : a) cin >> i;
        int ans = a[0];
        for (int i = 1 ; i < n ; i++)
            ans = ((ans / a[i]) + 1) * a[i];
        cout << ans << endl;
    }
}