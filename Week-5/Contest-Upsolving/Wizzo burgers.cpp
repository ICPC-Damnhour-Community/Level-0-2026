#include <bits/stdc++.h>
#define tests int t; cin >> t; while(t--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
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

    int n , t; cin >> n >> t;
    if (t == 10 and n == 1) cout << -1;
    else if (t == 10)
    {
        // n >= 2
        cout << 10;
        n -= 2;
        for (int i = 1 ; i <= n ; i++)
            cout << 0;
    }
    else
    {
        for (int i = 1 ; i <= n ; i++)
            cout << t;
    }
}