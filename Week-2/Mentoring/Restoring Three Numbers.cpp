#include<iostream>
using namespace std;
int main(){
    int x1 , x2 ,x3 , x4; 
    cin >> x1 >> x2 >> x3 >> x4;
    int maxi = x1;
    if(x2 > maxi) maxi = x2;
    if(x3 > maxi) maxi = x3;
    if(x4 > maxi) maxi = x4;

    if(x1 != maxi) cout << maxi - x1 << " ";
    if(x2 != maxi) cout << maxi - x2 << " ";
    if(x3 != maxi) cout << maxi - x3 << " ";
    if(x4 != maxi) cout << maxi - x4 << " "; 
    
    return 0;
}