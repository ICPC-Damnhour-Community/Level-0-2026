#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
const int N = 500 + 5, M = N, MOD = 1e9 + 7;


int max_element(int n, int a[]) {
    int mx = a[0];
    for (int i = 1 ; i<n; i++) {
        mx = max(mx , a[i]);
    }
    return mx;
}

int min_element(int n, int a[]) {
    int mn = a[0];
    for (int i = 1 ; i<n; i++) {
        mn = min(mn , a[i]);
    }
    return mn;
}

bool is_prime(int x) {
    if (x == 1) return false;
    for (int i = 2 ; i*i<=x ; i++) {
        if (!(x % i)) return false;
    }
    return true;
}

int count_primes(int n, int a[]) {
    int cnt = 0;
    for (int i = 0 ; i<n ;i++) {
        if (is_prime(a[i])) cnt++;
    }
    return cnt;
}

bool is_palindrome(int x) {
    string s = to_string(x);
    int l = 0 , r = s.size()-1;
    while (l <= r) {
        if (s[l] != s[r]) return false;
        l++ , r--;
    }
    return true;
}
int count_palindrome(int n , int a[]) {
    int cnt = 0;
    for (int i = 0 ; i<n ;i++) {
        if (is_palindrome(a[i])) cnt++;
    }
    return cnt;
}
int count_divs(int x) {
    int cnt = 0 ;
    // 1 2 3 4 6 9 12 18 36
    for (int i = 1 ; i*i <= x ; i++) {
        if (x%i == 0 and !(i*i == x)) cnt+=2;
        if (i*i == x) cnt++;
    }
    return cnt;
}

int maxNumOfDivs(int n , int a[]) {
    int mx = 0 , res = 0;
    for (int i= 0 ;i<n ;i++) {
        int cntDivs = count_divs(a[i]);
        if (cntDivs >= mx) {
            mx = cntDivs;
            res = a[i];
        }
    }
    return res;
}
void solve() {

    int n ; cin >> n;
    int a[n]; for (int & ele : a) cin >> ele;
    sort(a , a+n);
    cout << "The maximum number : " << max_element(n , a) << endl;
    cout << "The minimum number : " << min_element(n , a) << endl;
    cout << "The number of prime numbers : " << count_primes(n , a) << endl;
    cout << "The number of palindrome numbers : " << count_palindrome(n , a) << endl;
    cout << "The number that has the maximum number of divisors : " << maxNumOfDivs(n , a) << endl;
}

signed main() {
    fast
    int t = 1 ;
    // cin >> t;
    while(t--){
        solve();

    }
}
