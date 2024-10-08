#include <bits/stdc++.h>
using namespace std;

void cong( int a[], int b[])
{
    if( a[1] == b[1])
    {
        cout << a[0] + b[0] << "\n--\n"<< b[1];
    }
    else
    {
       cout <<( a[0]*b[1]) + (b[0]*a[1]) << "\n--\n"<< a[1]*b[1];
    }

};

int main()
{
    int a[2];
    int b[2];
    cout << "Nhập phân số thứ nhất: \n";
    cin >> a[0] >> a[1];
    cout << "Nhập vào phân số thứ hai: \n";
    cin >> b[0] >> b[1];

    cong(a , b);

    return 0;
}