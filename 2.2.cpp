#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T1; // số thứ nhất
    int T2; // số thứ hai
    int T3; // số thứ ba

    cout << "Nhap vao so thu 1: ";
    cin >> T1;
    cout << "Nhap vao so thu 2: ";
    cin >> T2;
    cout << "Nhap vao so thu 3: ";
    cin >> T3;
/// phần trọng tâm của bài toán
    int max;
    int local; 
    if( T1 == T2 == T3 ){
        max = T1;
        cout << "Ca ba deu bang nhau va bang: "<< max;
    }
    else{
        if( T1  >  T2)
    {
        max = T1;
        local = 1;
    }
    else{
        max = T2 ;
        local = 2;
    }

    if(max > T3)
    {   cout << "So lon nhat la so thu: "<< local<< endl;
        cout <<"Co gia tri la: "<< max;
    }
    else
    {   cout <<  "Sp lon nhat la so thu: 3" << endl; 
        cout <<"Co gia tri la: "<< T3;
    }
    }
    cout << endl << "Thank for developer <3";
    return 0;
}