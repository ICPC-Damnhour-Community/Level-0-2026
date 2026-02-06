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
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    int ctr=0;
    for(int i=0;i<3;i++) {
        if (arr[i]==arr[i+1]) ctr++;
    }
    cout<<ctr;


}
