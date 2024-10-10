#include<bits/stdc++.h>
using namespace std;

class Tron
{
    private: 
        double r;
    public: 
        void nhap();
        void xuat();
        double get_r(); // lấy thông tin r;    
};

void Tron::nhap()
{   
    cin >> r;
}

void Tron::xuat()
{   
    cout << fixed << setprecision(2);
    cout << r * M_PI << endl;
}

// hàm lấy giá trị của r 
double Tron::get_r()
{
    return r; 
}


int main()
{   
    int n ; 
    cout << "Nhập vào số lượng phần tử cần tính: "; 
    cin >> n; 

    Tron tron[n] ;
    for( int i = 0 ; i < n ; i ++ )
    {   
        cout << "Nhập vào giá trị thứ " << i <<" : ";
        tron[i].nhap();
    }

    for( int i = 0 ; i < n ; i ++ )
    {   
        cout << "Giá trị của phần tử thứ  " << i <<  " : " << endl;
        tron[i].xuat();
    }


    return 0;
}