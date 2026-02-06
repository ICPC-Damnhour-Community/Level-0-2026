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
        int a[n + 1];
        for (int i = 1 ; i <= n ; i++) cin >> a[i];
        bool parityForOdds = (a[1] % 2 == 0) , parityForEvens = (a[2] % 2 == 0) , valid = true;
        for (int i = 3 ; i <= n ; i++)
        {
            bool currElem = (a[i] % 2 == 0);

            if (i % 2 == 0)
                {if (currElem != parityForEvens) valid = false;}
            else
               {if (currElem != parityForOdds) valid = false;}
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}