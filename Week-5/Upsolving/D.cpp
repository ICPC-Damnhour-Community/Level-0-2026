#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n" 
// #define int long long
#define ll long long
// #define str string

ll FP(ll base , ll p ){
    if (p == 1) {
        return base ;
    }
    ll ans = FP(base , p/2) ;
    if (p % 2 == 0){
        return ans * ans ;
    }
    else {
        return base * ans * ans ;
    }
    
}

bool Is_Sorted(int arr[] , int s) {
    for (int i = 0 ; i < s ; i++) {
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < s-1 ; i++) { // 5
        if(arr[i] > arr[i+1]) {
            /*0         1
              1         2
              2         3
              3         4
              4         5
            */
            return 0 ;
        }
    } 
    return 1 ;
}


int32_t main () 
{
    fast 
    // int n ; cin >> n ;
    // int arr[n] ;
    // for(int i = 0 ; i < n ; i++) {
    //     cin >> arr[i] ;
    // }
    // if(is_sorted(arr,arr+n)) {
    //     cout << "Yes" ;
    // }
    // else {
    //     cout << "No" ;
    // }
    int n ; cin >> n ;
    int arr[n] ;
    if(Is_Sorted(arr,n)) {
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    
    
    
    
    return 0 ;
}