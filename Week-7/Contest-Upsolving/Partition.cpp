#include <bits/stdc++.h>
using namespace std;

int main() {
        int n ;
        cin >> n ;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        int b = 0 , c = 0 ;
        for(int i = 0 ; i < n ; i++){
           if(a[i] < 0) c += a[i] ;
           else b += a[i] ;
        }
        cout << b - c <<endl;
    return 0 ;
}
