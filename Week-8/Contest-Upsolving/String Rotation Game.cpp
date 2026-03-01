#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t ; cin >> t ; 
    while(t--){
        int n ; cin >> n ;
        string s ; cin >> s ;
        int ans = 1 ;
        for(int i = 0 ; i < n - 1 ; i++){
            if(s[i] != s[i+1]){
                ans++;
            }
        }
        if(ans != n && s[0] != s[n - 1]) ans++;
        cout << ans << endl;
    }
    return 0;
}