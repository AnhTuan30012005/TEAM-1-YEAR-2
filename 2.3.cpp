#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for( int i = 0 ; i < 3 ;  i++ )
    {
        cout << "Nhap vao so thu "<< i+1 << ": ";
        cin >> a[i];
    }
// bài toán chính thức bắt đầu

    sort(a, a + 3,greater<int>());

  
    for(int i = 0 ; i  < 3; i ++ )
    {
        cout << "Gia tri thu "<<  i+1 << ": ";
        cout << a[i] << endl;
    }

    return 0;
}