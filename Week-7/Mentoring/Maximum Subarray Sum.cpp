#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
 
    long long a[n];
    for(int i =0; i <n; i++)
        cin >> a[i];
 
    long long c_s=a[0];
    long long m_s=a[0];
 
    for(int i= 1;i<n;i++) {
        c_s = max(a[i], c_s + a[i]);
        m_s = max(m_s, c_s);
    }

    cout << m_s << "\n";
    return 0;
}