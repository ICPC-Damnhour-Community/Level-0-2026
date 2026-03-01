#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n , x ;
    cin >> n >> x ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int sum = 0 , cnt = 0 ;
    sort(a , a + n) ;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if(sum <= x) cnt++;
    }
    cout << cnt ;
    return 0;
}