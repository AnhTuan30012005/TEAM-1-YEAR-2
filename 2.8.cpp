#include<bits/stdc++.h>
using namespace std;

// hàm sắp xếp từ lớn đến bé và từ bé đến lớn
void sap_xep( int a[])
{
    for( int i = 0 ; i < 10; i++)   
    {
        int max = i;
        for( int j = i+1; j < 10; j++)
        {
            if( a[max] < a[j]){
                max = j;

            }
        }
        if( max != i )
        {
            int temp = a[i];
            a[i] = a[max];
            a[max] = temp; }
    }
    cout << "Day giam gian: ";

    for( int k = 0 ; k< 10; k++ )
    {
        cout << a[k] << " ";
    }
    cout << "\n" << "Day tang dan: ";
    for( int i = 9; i >= 0 ; i--)
        {cout << a[i] << " ";}
}

int main()
{
    int a[10];
    for( int i = 0 ; i < 10; i++ )
        cin >> a[i];

    
    sap_xep(a);

    return 0;
}