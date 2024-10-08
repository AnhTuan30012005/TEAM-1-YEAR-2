#include<bits/stdc++.h>
using namespace std;
void check( int m , int n , int x)
{
    if( (m + n) > x || ( m + x) > n || ( x + n ) > m)
    {
        cout << "Day la hinh tam giac";
    }
    else
    {
        cout << "Day khong phai la hinh tam giac";
    }



}


int main()
{
    int  m , n , x;
    cout << "Nhap vao dinh thu nhat: ";
    cin  >> m;
    cout << "Nhap vao dinh thu hai: ";
    cin >> n;
    cout << "Nhap vao dinh thu ba: ";
    cin >> x;

    check( m , n  ,x);


    return 0;
}