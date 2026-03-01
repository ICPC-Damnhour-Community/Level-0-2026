#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s ; cin >> s ;
    int n = s.length() ;
    int final = 26 * (n + 1);
    cout << final - n ;
    return 0;
}