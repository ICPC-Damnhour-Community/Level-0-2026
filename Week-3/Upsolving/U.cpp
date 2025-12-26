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
    int one=0, two=0, three=0, four=0, taxi=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else four++;
    }
    taxi += four;
    if (three>=one) {
        taxi += three;
        one =0;
    }
    else {
        taxi += three;
        one -= three;
    }
    if (two%2==0) {
        taxi += two/2;
        two =0;
    }else {
        taxi += two/2;
        if (one>=2) {
            taxi++;
            one -= 2;
        }else {
            taxi++;
            one--;
        }
    }
    if (one >0) {
        if (one%4==0) taxi += one/4;
        else taxi += one/4+1;
    }
    cout << taxi << endl;
    return 0;

}
