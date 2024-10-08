#include <bits/stdc++.h>
using namespace std;

void vohuong( int a[] , int b[], int n );

int main()
{   cout << "Nhap vao kich thuoc cua hai vector: ";
    int n; cin >> n;

    int a[n];
    int b[n];
    cout << "Nhập vào vector thứ nhất: ";
    for(int i = 0; i < n ; i++ )
    {
        cin >> a[i];
    }
    cout << "Nhập vào vector thứ hai: ";
    for( int i = 0 ; i < n; i++)
    {
        cin >> b[i];
    }
    vohuong(a , b, n );

    return 0;
}

void vohuong( int a[] , int b[], int n )
{
    double tich_tu = 0;
    for( int i = 0 ; i < n; i++ )
    {
        tich_tu += a[i]*b[i];
    }

    double vhA = 0;
   
    for(int i = 0 ; i < n ; i++)
    {
        vhA += a[i]*a[i]; 
    }
     vhA = sqrt(vhA);

    double vhB = 0;
    for(int i = 0 ; i < n ; i++)
    {
        vhB += b[i]*b[i]; 
    }
    vhB = sqrt(vhB);

   double ket_qua = tich_tu / (vhA * vhB);
   double cuoi_cung;
   cuoi_cung = (double)ket_qua;

   cout << fixed <<setprecision(2)<< "He so vo huong: " <<cuoi_cung << endl;
}