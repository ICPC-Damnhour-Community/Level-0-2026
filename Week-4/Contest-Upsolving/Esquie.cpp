#include <bits/stdc++.h>
using namespace std;

int main(){
  int t ; cin >> t ;
  while(t--){
    int n ; 
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
      cin >> a[i] ;
    } 
    int cnt = 0 , mx = a[0] ;
    for(int i = 1 ; i < n ; i++){
      if(a[i] < mx) cnt++ ;
      else mx = a[i] ;
    }
    cout << cnt << endl;
  }
    return 0;
}