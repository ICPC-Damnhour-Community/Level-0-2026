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
    tests
    {
        int n; cin >> n;
        int a[n];
        iota (a , a + n , 1);
        int ans[n];
        int i = 0 , j = n - 1;
        bool turn = true;
        for (int l = n - 1 ; l >= 0 ; l--)
        {
            if (turn) ans[l] = a[j] , j-- , turn = false;
            else ans[l] = a[i] , i++ , turn = true;
        }
        for (int &x : ans) cout << x << " ";
        cout << endl;
    }
}