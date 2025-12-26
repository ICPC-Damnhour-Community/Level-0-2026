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
    int x1, y1, x2, y2;
    while (1) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1==0 && x2==0 && y1==0 && y2==0 ) return 0;
        if (x1==x2 && y1==y2) {
            cout << 0 << endl;
        }else if (x1==x2 || y1==y2 || abs(x1-x2)==abs(y1-y2)) cout << 1 << endl;
        else cout << 2 << endl;

    }
}
