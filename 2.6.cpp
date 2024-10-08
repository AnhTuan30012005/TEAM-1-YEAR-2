#include <bits/stdc++.h>
using namespace std;

void dao_nguoc(int n){
    int  so = n;
    while( 1 ){
    
    // xóa các số 0 ở đuôi 
    if(so % 10 == 0)
    {
        cout << "";
        so = so / 10;
    }
    else {
            break;
    }
    }
    while ( 1 ){
        if(  so >= 10 ){
            cout << so % 10;
        }
        else{
            cout << so; 
            break;
            }
        so = so / 10 ;      
    }

}

int main()
{
    cout << "-Nhap vao so can dao nguoc: ";
    int n; cin >> n;
    
    dao_nguoc(n);    

    return 0;
}