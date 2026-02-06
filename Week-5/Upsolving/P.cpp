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
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int arr[n], s[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            s[i] = 0;
        }

        int count =0;

        for (int i=0; i<n-1; i++) {
            int ctr = 1;
            s[i] = 1;
            for (int j=i+1; j<n; j++) {
                if (arr[j]==arr[i] && s[j]==0) {
                    ctr++;
                    s[j] = 1;
                }
            }
           // cout << ctr << " ";
            count += ctr/2;
        }
        cout << count << "\n";
    }

}
