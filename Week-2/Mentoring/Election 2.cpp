#include <iostream>
using namespace std;
int main(){
    int N , T , A ;
    cin >> N >> T >> A ;
    if(T > (0.5 * N) || (A > (0.5 * N))){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}