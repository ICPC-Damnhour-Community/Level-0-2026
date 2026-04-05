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
   int n, m; cin >> n >> m;
   int b[n], w[m];

   for (int i=0; i<n; i++) {
      cin >> b[i];
   }
   for (int i=0; i<m; i++) {
      cin >> w[i];
   }
   sort(b, b+n, greater<int>());
   sort(w, w+m, greater<int>());
   int sum=0, indxb=-1, indxw=-1;
   for (int i=0; i<n; i++) {
      if (b[i]>0) {
         sum+=b[i];
         indxb=i;
      }

   }
   for (int i=0; i<m; i++) {
      if (indxb>=0 && i<=indxb) {
         if (w[i]>0) {
            sum+=w[i];
            indxw=i;
         }
      }
   }

   for (int i=1; i<n-indxb && i<m-indxw; i++) {
      if (w[indxw+i]>0) {
         if (abs(b[indxb+i])<w[indxw+i]) sum+=b[indxb+i]+w[indxw+i];
      }
      else break;
   }
   cout << sum << endl;

}
