#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
#include <iomanip>
#include <queue>
#include <cstdio>
#include <iterator>
#include <set>
#include <deque>
#include <stack>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <list>
#include <memory>
#include <numeric>
#include <map>

using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long



signed main() {
    fast
    int n, m; cin >> n >> m;
    int arr[m];
    for (int i=0; i<m; i++) cin >> arr[i];
    sort(arr, arr+m);
    int mini = 1e9;

    for (int i=n-1; i<m; i++ ) {
        int diff = arr[i]-arr[i-n+1];
        mini = min(mini, diff);

    }
    cout << mini;


}
