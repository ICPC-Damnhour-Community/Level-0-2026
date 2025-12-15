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
    string s;
    cin >> s;
    if (s == "SAT") {
        cout << "1";
    }
    else if (s == "SUN") {
        cout << 7;
    }
    else if (s == "MON") {
        cout << 6;
    }
    else if (s == "TUE") {
        cout << 5;
    }
    else if (s == "WED") {
        cout << 4;
    }
    else if (s == "THU") {
        cout << 3;
    }
    else {
        cout << 2;
    }
    return 0;
}
