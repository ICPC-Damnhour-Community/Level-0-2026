#include <bits/stdc++.h>
using namespace std;

int main(){
  int t ; cin >> t ;
  while(t--){
    int n ; cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
      cin >> a[i] ;
    }
    int x ; cin >> x ;
    int mn = INT_MAX , mx = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
     mn = min (mn , a[i]) ;
     mx = max(mx , a[i]) ;
    }
    if(x >= mn && x <= mx)
    {
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
    return 0;
}