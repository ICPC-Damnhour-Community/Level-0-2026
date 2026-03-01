#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int n){
    if(n < 2) return 0 ;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0) return 0 ;
    }
    return 1 ;
}

int main(){
    int n , m ;
    cin >> n >> m ;
    int x = 0 ;
    for(int i = n + 1 ; i <= 50 ; i++){
        if(prime(i)){
            x = i ;
            break;
        }
    }
    if(x == m) cout << "YES" ;
    else cout << "NO" ;
    return 0;
}