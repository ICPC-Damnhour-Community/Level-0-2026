#include <bits/stdc++.h>
#define tests int t; cin >> t; while(t--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long
#define endl "\n"
short dx[]{1, -1, 0, 0};
short dy[]{0, 0, 1, -1};
using namespace std;
constexpr int N = 1e5 + 5, mod = 1e9 + 7;

void IP()
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
        int n;
        cin >> n;
        int sum = (n * (n + 1)) / 2;

        int currPow = 1; // 2 ^ 2
        while (currPow <= n)
        {
            sum -= (2 * currPow);
            currPow *= 2;
        }

        cout << sum << endl;
    }
}