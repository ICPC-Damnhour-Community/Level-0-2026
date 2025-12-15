#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
   int n , x ;
   cin >> n >> x ;
   int cnt = 0 ;
   for(int i = 1 ; i <= n ; i++){
      if(x % i == 0){
         int j = x / i ;
         if(j <= n){
            cnt++;
         }
      }
   }
   cout << cnt << endl;
   return 0;  
}