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
    while (1) {
        int n; cin >> n;
        if (n==0) return 0;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (s[j]+s[i]>s[i]+s[j]) {
                    swap(s[i], s[j]);
                }
            }
        }
        for (int i=0; i<n; i++) cout << s[i];
        cout << "\n";
    }

}
