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
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    //cout << a << " " << b << endl;
    if (a<b) cout << -1;
    else if (a>b) cout << 1;
    else cout << 0;



}
