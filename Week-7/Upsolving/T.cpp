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
   while (t--) {
      int n, k;
      cin >> n >> k;
      if (n%2==k%2) {
         if ((n-(k-1))%2!=0 && (n-(k-1)) >0) {
            cout << "YES" << endl;
            for (int i=1; i<k; i++) {
               cout << 1 << " ";
            }
            cout << n-(k-1) << endl;
         }
         else cout << "NO" << endl;

      }
      else if (n%2==0 && n%2!=k%2) {
         if ((n-2*(k-1))%2==0 && (n-2*(k-1)) >0) {
            cout << "YES" << endl;
            for (int i=1; i<k; i++) cout << 2 << " ";
            cout << n-2*(k-1) << endl;

         }else {
            cout << "NO" << endl;
         }
      }
      else {
         cout << "NO" << endl;
      }
   }

}
