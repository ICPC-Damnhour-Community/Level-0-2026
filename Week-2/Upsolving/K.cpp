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
    float a;
    cin >> a;
    int x = (int)a;
    float y = a - x;
    y = y * 10;

    if (y>=0 && y<=2) {
        cout << x << "-";
    }
    else if (y>=3 && y<=6) {
        cout << x ;
    }
    else {
        cout << x << "+";
    }
    return 0;
}
