#include <bits/stdc++.h>
using namespace std;

void Cong( vector<int> vecA , vector<int> vecB, int n);

int main()
{   
    cout << "Nhap vao do dai cua vector: ";
    int n; cin >> n ; 
    vector<int> a(n);
    vector<int> b(n);

    // nhập vào vector a;
    cout << "Nhap vao vector a: \n";
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i];
    }

    // nhập vào vector b;
    cout << "Nhập vào vector b: \n";
    for( int i =0 ; i < n; i++)
    {
        cin >> b[i];
    }
    
    Cong(a ,b ,n);

    return 0;
}

void Cong( vector<int> vecA , vector<int> vecB, int n){
    vector<int> c(n);
    for( int i = 0 ; i < n ;i++)
    {
        c[i] = vecA[i]+ vecB[i];
    }

    cout << "Kết quả phép cộng hai vector: \n";
    for( int value : c)
    {
        cout << value << " "; 
    }
}