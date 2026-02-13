#include <bits/stdc++.h>
using namespace std;

signed main (){
  int tc ;
  cin >>tc ;
  while (tc--){
      double  d;
      cin >>d;
      if (d==0){
          cout << "Y " << 0.000000000 <<" "<<0.000000000<<endl;
      }
     else  if(d<4){
          cout<<"N"<<endl;
      }
      else{
      double a , b;
      a=(d-sqrt(d*d -4*d))/2;
      b=(d+sqrt (d*d -4*d))/2;
      cout<<"Y "<<fixed <<setprecision(9)<<a <<" "<<b<<endl;
      }
  }
}