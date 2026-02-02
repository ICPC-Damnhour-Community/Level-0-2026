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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int ctr=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i]%2!=0) ctr++;
        }
        if (ctr%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}
