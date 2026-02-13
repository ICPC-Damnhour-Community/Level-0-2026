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
    while(t--) {
        string a, b, c;
        cin >> a >> b >> c;
        int count =0;
        for (int i=0 ; i<a.size() ; i++) {
            if (c[i]==a[i] || c[i]==b[i]) count ++;
        }
        if (count == a.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}