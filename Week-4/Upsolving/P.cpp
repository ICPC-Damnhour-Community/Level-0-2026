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
        int arr[3];
        for (int i = 0; i < 3; i++) cin >> arr[i];
        sort(arr, arr + 3);

        if (arr[2]%arr[0]==0 && arr[1]%arr[0]==0) {
            if (arr[2]/arr[0] + arr[1]/arr[0] -2 <=3) cout << "YES\n";
            else cout << "NO\n";
        }else {
            cout << "NO\n";
        }
    }


}

