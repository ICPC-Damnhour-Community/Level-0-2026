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
    for (int t =1; ;t++) {
        int n; cin >> n;
        if (n==0) return 0;

        int arr[n];
        int sum=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        int high = sum / n;
        int moves=0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < high) {
                moves+=(high-arr[i]);
            }
        }
        cout << "Set #" << t << endl;
        cout << "The minimum number of moves is " << moves << "." << endl;
        cout << endl;
    }

}

