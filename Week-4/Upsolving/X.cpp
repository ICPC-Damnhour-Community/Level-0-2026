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
    int n; cin >> n;
    int arr[3];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int solve = 0;
        for (int j = 0; j < 3; ++j) {
           cin >> arr[j];
            if(arr[j] == 1) solve++;
       }
        if (solve >1) count++;

    }
    cout << count << endl;

}

