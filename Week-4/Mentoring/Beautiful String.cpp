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
    tests
    {
        int n; cin >> n;
        char a[n];
        int indices[n];
        for (char &i : a) cin >> i;
        int counter = 0 , j = 0;
        for (int i = 0 ; i < n ; i++)
        {
            if (a[i] == '0')
            {
                counter++;
                indices[j] = i + 1;
                j++;
            }
        }
        cout << counter << endl;
        for (int i = 0 ; i < j ; i++) cout << indices[i] << " ";
        cout << endl;
    }
}