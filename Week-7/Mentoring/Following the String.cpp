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
    int  t;cin>>t;
    while (t--) {
        int n;cin>>n;
        int a[n];
        for (int i=0 ;i<n; i++) {
            cin>>a[i];
        }
        string s;
        int count [26]={0};    //[0=???{1}
        for (int i=0;i<n;i++) {   /// 0 1 0 0 2

            for (char d='a';d<='z' ;d++) {  //a ,b ,c,d....   s+= d

                if (count[d-'a']==a[i]) {   //a-a=0   count[1] ==0
                    s+=d;   //a b c>>>>z
                    count[d-'a']++; //count[1]=1
                    break;
                }
            }
        }
        cout<<s<<endl;

    }
    return 0;

}