#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int grid[n+2][n+2] ;
        int cnt = 1 ;
        for(int i = 1 ; i <=n ; i++){
            for(int j = 1 ; j <= n ; j++){
                grid[i][j] = cnt ;
                cnt++;
            }
        }
        int sum = 0 ;
        int mx = 0 ;
        for(int i = 1 ; i <=n ; i++){
            for(int j = 1 ; j <= n ; j++){
                sum = grid[i][j] ;
                if(i > 1) sum += grid[i - 1][j];
                if(j > 1) sum += grid[i][j - 1];
                if(i < n) sum += grid[i + 1][j];
                if(j < n) sum += grid[i][j + 1];
                mx = max(mx , sum) ;
            }
        }
        cout << mx << endl;
    }
    return 0;
}