#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define test int t;cin>>t;while(t--)

int main(){
    fast

    int t; cin>>t;
    while (t--) {

    int n ;
    long long x,y;
    cin>>n>>x>>y;
    long long a[n];
    long long tn=0;
    for (int i=0 ;i<n;i++) {
        cin>>a[i]; //10
        //10/x ++++
        tn += a[i]/x;  //2+1+1+1 ==5
    }
        long long ans=0 ,mx=0;
    for (int i=0 ;i<n;i++) {
        ans =a[i] +(tn-a[i]/x)*y;//22
        mx=max(mx, ans);   //(0,22)  >>22  (22,25)>>>25 ,(25 ,24)>>>25  25
    }
    cout<<mx<<endl;
    }
    return 0;

}