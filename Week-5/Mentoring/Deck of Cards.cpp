#include <bits/stdc++.h>
using namespace std;

void cnt_Str(string s , int &zero ,int &one , int &two){
    zero = one = two = 0 ;
    for(char c : s){
        if(c == '0') zero++;
        else if (c == '1') one++;
        else two++;
    }
}

int main() {
    int t ; cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        string x ; cin >> x ;
        string ans = string(n , '+');
        if(n == k){
            cout << string(n , '-') << endl ;
            continue;
        }
        else{
            int zero , one , two ;
            cnt_Str(x , zero , one , two);
            int l = 0 , r = n-1;
            while (zero--) ans[l++] = '-';
            while (one--) ans[r--] = '-';
            while (two--) {
                ans[l] = '?' , ans[r] = '?';
                l++, r--;
            }
            cout << ans << endl;
        }
    }
    return 0 ;
}
