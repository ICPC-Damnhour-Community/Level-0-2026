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
    string s; cin >> s;
    int num=0;
    char now = 'a';
    for (int i=0; i<s.size(); i++) {
        int clock = abs (s[i]-now);
        int couterclock = 26-clock;
        num += min (clock, couterclock);
        now = s[i];
    }
    cout << num << endl;
}
