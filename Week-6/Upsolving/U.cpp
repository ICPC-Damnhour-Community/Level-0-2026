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
        string s; cin >> s;
        int a=0, b=0, c=0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i]=='A') a++;
            if (s[i]=='B') b++;
            if (s[i]=='C') c++;
        }
        if (b==a+c)cout << "YES\n";
        else cout << "NO\n";
    }
}