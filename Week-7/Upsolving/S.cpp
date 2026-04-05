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
   int n; cin>>n;
   int arr[n];
   for (int i=0; i<n; i++) {
      cin >>arr[i];

   }
   int t=0;
   for (int i=0; i<n; i++) {
      int cycle=arr[i]/5;
      t+=3*cycle;
      arr[i]-=cycle*5;

      while (arr[i] > 0) {
         t++;
         if (t % 3 == 0)
            arr[i] -= 3;
         else
            arr[i] -= 1;
      }
   }

   cout << t;

}
