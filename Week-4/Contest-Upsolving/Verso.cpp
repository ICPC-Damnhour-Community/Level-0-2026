#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[3];
  for(int i = 0 ; i < 3 ; i++){
    cin >> a[i] ;
  }
  sort (a , a + 3) ;
  int diff = a[2] - a[0] ;
  if(diff >= 10){
    cout << "check again";
  }
  else{
    cout << "final " << a[1] ;
  }
    return 0;
}