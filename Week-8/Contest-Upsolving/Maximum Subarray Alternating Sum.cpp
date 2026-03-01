#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll kadane(vector<int>&a){
    ll sum = 0 , mxsum = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        sum += a[i];
        if(sum < 0) sum = 0 ;
        mxsum = max(mxsum , sum);
    }
    return mxsum ;
}

void solve(){
    int n ; cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    // + - + - 
    for(int i = 1 ; i < n ; i += 2){
        a[i] = -a[i] ;
    }
    ll ans1 = kadane(a) ;
    // - + - + 
    for(int i = 0 ; i < n ; i++){
        a[i] = -a[i] ;
    }
    ll ans2 = kadane(a);
    ll ans = max(ans1 , ans2) ;
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; cin >> t ; while(t--){
        solve() ;
    }
    return 0;
}