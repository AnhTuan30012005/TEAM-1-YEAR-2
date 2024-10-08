#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout << "Nhap vao so 'n': ";
    cin >> n; 
    
    if( n > 1){
        for( int i = 0; i < n; i ++ )
        {    int so = i+1;
            if( so % 2 == 0)
            {
                cout << so << endl;
            }
        }
    }
    else
    {
        cout << "Khong co so chan nao ca !";
    }

    return 0;
}