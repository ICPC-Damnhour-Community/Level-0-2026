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

int Factorial(int n) {
    int mul = 1;
    for (int i = 1; i <= n; ++i) mul *= i;
    return mul;
}

signed main() {
    fast
    int n; cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> q[i];

    int arr[n];
    for (int i=0; i<n; i++) arr[i]=i+1;

    int num = Factorial(n);
    int ctr=0, a=0, b=0;

    while (num--) {
        ctr++;
        if (equal(arr, arr + n, p)) a = ctr;
        if (equal(arr, arr + n, q)) b = ctr;

        next_permutation(arr, arr+n);
       // for (int i = 0; i < n; ++i) cout << arr[i] << " "; cout << endl;


    }
    cout << abs(a-b);

}
