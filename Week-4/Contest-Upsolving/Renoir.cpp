#include <bits/stdc++.h>
using namespace std;

int main(){
  int s , n ;
  cin >> s >> n ;
  int chroma[n] , bonus[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> chroma[i] >> bonus[i] ;
  }
  for(int i = 0 ; i < n - 1 ; i++){
    for(int j = i + 1  ; j < n ; j++){
      if(chroma[i] > chroma[j]){
        swap(chroma[i] , chroma[j]) ;
        swap(bonus[i] , bonus[j]) ;
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    if(chroma[i] >=s) {
      cout << "NO" ;
      return 0 ;
    }
    s += bonus[i] ;
  }
  cout << "YES" ;
    return 0;
}