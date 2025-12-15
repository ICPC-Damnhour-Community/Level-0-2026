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



int main() {
    fast
    int x, a, b;
    cin >> x >> a >> b;
    int rem = a-b;
    if (rem >= 0) {
        cout << "delicious";
    }
    else {
        if (x+rem >= 0) {
            cout << "safe";
        }
        else {
            cout << "dangerous";
        }
    }
}
