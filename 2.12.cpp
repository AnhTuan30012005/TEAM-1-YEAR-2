#include<bits/stdc++.h>
using namespace std;

int main()
{   
    cout << fixed << setprecision(1);
    int n;
    cout << "Nhap vao so canh: " ;
    cin >> n ; 
    double da_giac[n];
    double ket_qua = 0.00 ;
    for( int i = 0 ; i < n ; i++)
    {   cout << "canh thu " << i+1 << " la: "; 
        cin >> da_giac[i];
        ket_qua += da_giac[i];
    }

    cout << "Chu vi cua da giac " << n << " canh la: "<< ket_qua <<".";
    return 0; 
    
}

// đầu tiên nhập số cạnh của đa giác
//  nhập từng giá trị và cộng lại cho nhau là được 
