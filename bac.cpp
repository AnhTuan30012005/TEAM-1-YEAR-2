#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n ; cin >> n ;
    long long tong = 0 ; 

    for( int i = 1 ; i <= n ; i ++ )
    {
        tong += i ; 
    }

    cout << tong ; 

    return 0 ; 
}