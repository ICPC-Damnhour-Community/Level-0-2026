#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s ; cin >> s ;
        int ans = 0 , cnt = 1 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                cnt++; 
            }
            else{
                ans += cnt / 3 ;
                ans++;
                cnt = 0 ;
            }
        }
        cnt++; 
        ans += cnt / 3 ; 
        cout << ans << endl; 
    }
    return 0 ;
}
