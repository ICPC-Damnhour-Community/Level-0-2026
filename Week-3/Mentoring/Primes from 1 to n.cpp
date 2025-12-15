#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
   int n ; cin >> n ;
   for(int i = 2 ; i <= n ; i++){
      int x = i , ans = 0 ;
      for(int j = 2 ; j < x ; j++){
         if(x % j == 0){
            ans+=1;
         }
      }
      if (ans == 0){
         cout << x << " " ; 
      }
   }
      return 0; 
}