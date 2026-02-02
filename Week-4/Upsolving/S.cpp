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
    while (t--) {
        string s; cin >> s;
        int sec=0,  now=1 , next;
        int num[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 0; i < 4 ; i++) {
            next = s[i]-'0';  //1111
            sec += abs(num[now]-num[next]);
            sec++;
            now = next;

        }
        cout << sec << "\n";
    }
}

