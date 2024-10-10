#include <bits/stdc++.h>
using namespace std;

class Xe
{
    private: 
        int Toc;
        char Nhan[15];
        int Gia; 
    public: 
        void nhap();
        void xuat();
        int get_Gia();

};

void Xe::nhap(){
    cout << "Tốc độ: ";
    cin >> Toc;
    cin.ignore();
    cout << "Nhãn hiệu: ";
    cin.get(Nhan, 15); 
    cout << "Giá cả: ";
    cin >> Gia;
    cin.ignore();
};
void Xe::xuat(){
    cout << setw(5) << Toc;
    cout << setw(16) << Nhan;
    cout << setw(14) << Gia; 
};

int Xe::get_Gia(){
    return Gia;
};


int main()
{   
    cout << "Nhập vào số lượng xe: ";
    int n;
    cin >> n;
    cin.ignore();

    Xe se[n];

    for( int i = 0 ; i < n ; i ++ ) 
    {   
        cout <<"Nhập vào số xe thứ " <<  i+1 << " :" << endl;  
        se[i].nhap();
    }

    int max = se[0].get_Gia();
    for( int i = 0 ; i < n ; i++ )
    {
        if( max < se[i].get_Gia())
        {
            max = se[i].get_Gia();
        } 
    }
    cout << "-- Kết quả cuối cùng, xe có giá cao nhất --" << endl;
    cout << setw(13) << " Tốc độ ";
    cout << setw( 19) << "Nhãn hiệu ";
    cout << setw(19) << "Giá thành: "<< endl; 

    for( int i = 0 ; i < n ; i++ )
    {
        if( max = se[i].get_Gia())
        {
            max = se[i].get_Gia();
            se[i].xuat();
            break;
        } 
    }
    
    return 0; 
}

