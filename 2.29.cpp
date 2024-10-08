#include <bits/stdc++.h>
using namespace std;

// hàm tải bội
void Cong( int *a ,int b[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        a[i] += b[i];
    }

}

int main()
{
    int n;
    cout << "Nhap vao kich thuoc cua mang mot chieu: ";
    cin >> n;
    cout << "Nhap vao phan tu mang a: ";
    int a[n];
    int b[n];
    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cout << "Nhap vao phan tu mang b: ";
    for( int i = 0 ; i < n; i++ )
    {
        cin >> b[i];
    }

    Cong( a, b, n );
    // in ra; 
    for( int value : a)
        cout << value << " ";

    return 0;
}