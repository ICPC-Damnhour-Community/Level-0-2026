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
    while (t--){
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int arr[n], count=0;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            int num = abs(H-arr[i]);
            if (num%k==0 && num!=0) {
                if (num<=k*(m-1)) count++;
            }
        }
        cout << count << endl;
    }
}

