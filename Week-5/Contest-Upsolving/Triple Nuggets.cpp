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
        int a[n]; for (int &i : a) cin >> i;
        sort (a , a + n);
        int old = a[0] , counter = 1;
        for (int i = 1 ; i < n ; i++)
        {
            if (a[i] == old) counter++;
            else
            {
                old = a[i];
                counter = 1;
            }

            if (counter == 3)
            {
                cout << old << endl;
                goto here;
            }
        }
        cout << -1 << endl;
        here :
    }
}