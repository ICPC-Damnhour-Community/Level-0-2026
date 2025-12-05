#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n; 
    int n1 = n % 10 ; 
    int n2 = n / 10 ;
    if(n1 == 0 || (n2 % n1) == 0 || (n1 % n2) == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}