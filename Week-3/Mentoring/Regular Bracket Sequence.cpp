#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    
    char c;
    int opened = 0 , ans = 0;
    while (cin >> c)
    {
        if (c == '(') opened++;
        else
        {
            if (opened > 0) opened-- , ans += 2;
        }
    }
    cout << ans;

}
