#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {

   int t ; cin >> t ;
   while(t--){
    int n , y ; cin >> n >> y ;
   int first = 0 , last = 0 ;
   bool f = 0 ; 
   for(int i = 1 ; i <= n ; i++){
      int x ; cin >> x ;
      if(f == 0 && x == 1){
         first = i , f = 1 ;
      }
      if(x) last = i ;
   }
   if(last - first + 1  <= y){
      cout << "YES" << endl;
   }
   else{
      cout << "NO" << endl;
   }
   }
         return 0;  
}