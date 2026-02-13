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
    int  ze=0;

    for (int i=s.size()-1; i>=0; i--) {
        if (s[i]=='0') ze++;
        else break;
    }
    string snew="";
    for (int i=0; i<s.size()-ze; i++) {
        snew+=s[i];
    }
    string rev = snew;
    reverse(rev.begin(), rev.end());
    if (rev==snew) cout << "Yes"<<endl;
    else cout << "No"<<endl;

}

