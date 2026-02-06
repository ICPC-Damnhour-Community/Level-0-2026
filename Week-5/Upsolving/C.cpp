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



void exist(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        cin >> arr[i] ;
    }
    int x ; cin >> x ;
    string y ;
    for(int i =0 ; i < size ; i++) {
        if(arr[i] == x) {
            y = "Yes" ;
            break ;
        }
        else {
            y = "No" ;
        }
    }
    cout << y ;
}


int32_t main () 
{
    fast 
    // int n ; cin >> n ; 
    // int arr[n] ;
    // for (int i = 0 ; i < n ; i++) {
    //     cin >> arr[i] ;
    // }
    // int x ; cin >> x ;
    // sort(arr,arr+n) ; 
    // int r = binary_search(arr,arr+n,x) ;
    // if(r==1) {
    //     cout << "Yes" ;
    // }
    // else {
    //     cout << "No" ;
    // }



    // int n ; cin >> n ; 
    // int arr[n] ;
    // for (int i = 0 ; i < n ; i++) {
    //     cin >> arr[i] ;
    // }
    // int x ; cin >> x ; 
    // int *r = find(arr,arr+n,x) ;
    // if(r != arr+n) {
    //     cout << "Yes" ;
    // }
    // else {
    //     cout << "No" ;
    // }



    // int n ; cin >> n ; 
    // int arr[n] ;
    // for (int i = 0 ; i < n ; i++) {
    //     cin >> arr[i] ;
    // }
    // int x ; cin >> x ;
    
    // int r = count(arr,arr+n,x) ;
    // if(r>=1) {
    //     cout << "Yes" ;
    // }
    // else {
    //     cout << "No" ;
    // }


    
    
    int n ; cin >> n ;
    int arr[n] ;
    exist(arr,n) ;
    
    
    
    
    return 0 ;
}