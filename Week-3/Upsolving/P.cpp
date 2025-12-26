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
    int sum =0, totalSum =0;
    for (int i=1; i<=n; i++) {
        sum += i;
        totalSum += sum;
        // cout << sum << " " << totalSum << endl;
        if (totalSum > n) {
            cout << i-1 << endl;
            break;
        }
        if (totalSum == n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}