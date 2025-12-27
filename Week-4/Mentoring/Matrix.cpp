#include <bits/stdc++.h>
using namespace std;
int main (){
   int n ; cin >> n ;
   int grid[n][n] ;
   for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
        cin >> grid[i][j] ;
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    int final = 0;
    for(int i = 0 ;i < n;i++){
        sum1 += grid[i][i];
    }
    for(int i = 0 ;i < n;i++){
        sum2 += grid[i][n-i-1];
    }
    final = abs(sum1 - sum2);
    cout << final << endl;
    return 0;
}