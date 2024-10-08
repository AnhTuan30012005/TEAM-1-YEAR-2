#include <bits/stdc++.h>
using namespace std;

// viết hàm 
void nhap(int a[][100] , int b[][100] , int m , int n);
void tinh(int a[][100] , int b[][100] , int cuoi[][100] , int m , int n);

int main()
{
    cout << "Nhập vào kích thước của mảng hai chiều: ";
    int m , n;
    cin >> m >> n ;
    int a[m][100];
    int b[m][100];
    int cuoi[n][100];
    
    nhap(a ,b , m ,n);
    tinh(a , b , cuoi , m , n );

    return 0;
}

void nhap(int a[][100] , int b[][100] ,  int m , int n)
{
    for( int i = 0 ; i < m; i++)
    {
        for( int j = 0 ; j < n; j++ )
        {
            cin >> a[i][j];
        }
    }

    for( int i = 0 ; i < m; i++)
    {
        for( int j = 0 ; j < n; j++ )
        {
            cin >> b[i][j];
        }
    }

};

void tinh(int a[][100] , int b[][100] , int cuoi[][100] , int m , int n){
    for( int i = 0 ; i < m ; i++)
    {
        for( int j = 0 ; j < n ; j++  )
        {
            cuoi[i][j] = a[i][j] + b[i][j]; // truy cập một vùng nhớ nhất định, không truy cập toàn bộ bộ nhớ 
        }
    }

    cout << "Day la ket qua: ";
    for( int i = 0 ; i < m ; i ++)
    {
        for( int j = 0 ; j < n ; j++)
        {
            cout << cuoi[i][j] << " ";
        }
    }
};