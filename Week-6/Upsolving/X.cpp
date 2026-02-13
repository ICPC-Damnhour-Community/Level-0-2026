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
        int zero = 0;
        for (int i = 0; i < s.size(); i++) {
            int count = 0;
            if (s[i]=='1') {
                for (int j =i+1; j < s.size(); j++) {
                    if (s[j]=='0') {
                        count++;
                    }else {
                        zero+=count;
                        break;
                    }
                }
            }
        }
        cout << zero << endl;
    }
}