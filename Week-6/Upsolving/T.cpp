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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int x=0;

    for (int i=n-1; i>=1; i-- ) {
        if (s.substr(0,i)==s.substr(n-i,i)) {
            x=i;
            break;
        }
    }
    string t = s.substr(x);
    cout << s;
    for (int i=1; i<k; i++) {
        cout << t;
    }

}
