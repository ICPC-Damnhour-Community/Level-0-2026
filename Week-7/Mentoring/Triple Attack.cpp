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
    int n;cin>>n;
    long long arr[n];
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
    long long Nblock=0, T=0;
    for (int i =0 ;i <n; i++) {
        Nblock=arr[i]/5; //2/5
        T+= Nblock*3;  //4
        arr[i]-=Nblock *5; //6-5======1  2

        while (arr[i]>0) {
            T++; //6
            if (T%3==0) arr[i]-=3; //-2
            else arr[i]-=1; //1
        }
    }
    cout<<T<<endl;
    return 0;

}