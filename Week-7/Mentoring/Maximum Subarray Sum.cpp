#include <bits/stdc++.h>
using namespace std;
int main (){
   int n ; cin >> n ;
   int a[n];
   for(int &i : a) cin >> i ;
   long long sum = 0 , ans = INT_MIN;
   for(int i = 0 ; i < n ; i++){
       sum += a[i];
       ans = max(ans , sum);
       sum = max(sum , 0LL);
       cerr << sum << endl;
    }
    cout << ans << endl;
    return 0;
}