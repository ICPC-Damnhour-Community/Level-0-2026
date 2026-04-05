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
    int n; cin >> n;
    int arr[n];
    int maxi = 0, mini = 1e18;
    int maxIndex=-1, minIndex=-1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxi) {
            maxi = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= mini) {
            mini = arr[i];
            minIndex = i;
        }
    }
   // cout << maxIndex << " " << minIndex << endl;
    int time = (maxIndex) + (n-1-minIndex);
    if (maxIndex > minIndex) cout << time -1;
    else cout << time;
    return 0;
}

