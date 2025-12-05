#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b ;
    int c = b - a + 1 ;
    if(a > 0){
        cout << "Positive" << endl;
    }
    else if(a <= 0 && b >= 0){
        cout << "Zero" << endl;
    }
    else{
        if(c % 2 == 0){
            cout << "Positive" << endl;
        }
        else{
            cout << "Negative" << endl;
        }
    }
    return 0;
}