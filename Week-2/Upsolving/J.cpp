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
    int r, g, b;
    cin >> r >> g >> b;
    int num = r*100 + g*10 + b;
    if (num%4==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
