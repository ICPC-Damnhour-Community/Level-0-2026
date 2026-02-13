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
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++) {
            if (s[i]=='L') cout << 'L';
            else if (s[i]=='R') cout << 'R';
            else if (s[i]=='U') cout << 'D';
            else if (s[i]=='D') cout << 'U';
        }
        cout<<endl;
    }


}
