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
    int q; cin>>q;
    while(q--) {
        string s, t;
        cin >> s >> t;
        int ok =0;

        for (int i = 0; i < s.size(); i++) {
            string s1= s.substr(0,i+1);
            string s2= s.substr(0,i);
            reverse(s2.begin(), s2.end());
            s1+=s2;

            if (s1.find(t) != string::npos) {
                cout << "Yes" << endl;
                ok=1;
                break;

            }

        }
        if (!ok) cout << "No" << endl;
    }
}