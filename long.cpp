#include <bits/stdc++.h>
using namespace std;

int main()
{   
    cout << fixed << setprecision(6) ;
    int n ; cin >> n ; 
    int a[n] ; 
    long long tong = 0 ; 
    for( int i = 0 ; i < n ; i++ ){
        cin >> a[i] ; 
        tong += a[i] ; 
    } 
   ; 
    double trungbinh = (double)tong/n ; 
    cout  << trungbinh << endl; 
    tong = 0 ; 
    if( n %2 == 0 ){
        tong = a[n/2] + a[(n/2) + 1 ] ; 
        trungbinh = tong/n ; 
        cout << trungbinh  ;
    }
    else{
       cout <<  (double)a[n/2]  ; 
    }
    
    return 0 ; 
}