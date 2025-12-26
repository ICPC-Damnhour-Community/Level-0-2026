#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int l , r , d , u ;
        cin >> l >> r >> d >> u ;
        if(l == r and r == d and d == u)  {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}