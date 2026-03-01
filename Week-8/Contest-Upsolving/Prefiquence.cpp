#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , m ;
        cin >> n >> m;
        string a , b ;
        cin >> a >> b ;
        int i = 0 ;
        for(int j = 0 ; j < m && i < n ;j++){
            if(a[i] == b[j]) i++;
        }
        cout << i << endl;
    }
    return 0;
}