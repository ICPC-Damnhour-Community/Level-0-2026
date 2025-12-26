#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        if(n % 3 == 0){
            cout << 0 << endl;
        }
        else{
            int y = n / 3 ;
            cout << (y + 1) * 3 - n << endl;
        }
    }
    return 0;
}