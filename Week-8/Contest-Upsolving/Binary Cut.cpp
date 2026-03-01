#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int  t ; cin >> t ;
    while(t--){
       string s ; cin >> s ;
       int n = s.length();
       int ans = 1 ;
       int f = 0 ;
       for(int  i = 0 ; i < n - 1 ; i++){
        if(s[i] != s[i+1]) ans++;
        if(s[i] == '0' && s[i+1] == '1') f = 1 ;
       }
       cout << ans - f << endl;

    }
    return 0;
}