#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,a[15] ;
    cin  >> n ; 
    int m = 0  ;  
    while( n!= 0 ){
        a[m] = n%2 ;
        n = n/2 ; 
        m++ ;
    }
    
    for( int i = 0 ; i < m ; i++ )
    {
       if(a[i] != a[0]){
        cout << "NO" ;
        return 1 ; 
       }
    }
    cout << "YES" ; 

    return 0;
}