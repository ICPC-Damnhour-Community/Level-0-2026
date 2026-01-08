#include <bits/stdc++.h>
using namespace std;

int main(){
  int t ; cin >> t ;
  while(t--){
    int n , k; 
    cin >> n >> k;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
      cin >> a[i] ;
    } 
    sort(a , a + n , greater()) ;
    int M = 0 , V = 0 ;
    for(int i = 0 ; i < n ; i += 2){
      if(k == 0){
        break ;
      }
      else{
        int diff = a[i] - a[i + 1] ;
        int x = min(k , diff) ;
        a[i + 1] += x ;
        k -= x ;
      }
    }
    for(int i = 0 ; i < n ; i++){
      if(i % 2 == 0) M += a[i] ;
      else V += a[i] ;
    }
    cout << M - V << endl;
  }
    return 0;
}