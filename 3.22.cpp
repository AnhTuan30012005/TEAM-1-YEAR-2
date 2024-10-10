#include <bits/stdc++.h>
using namespace std;

class Canbo {
    private: 
        char Ma_can_bo[10];
        string Ho_ten;
        int ngay , thang , nam;
        char Gioi_tinh[3];
        double He_so_luong ;

    public: 
        void nhap();
        void xuat();
        double luong();     
};

void Canbo::nhap(){
    cout << "Ma can bo: ";
    cin.get(Ma_can_bo , 10);
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin , Ho_ten);
    cout << "Ngay: ";
    cin >> ngay ;
    cout << "Thang: ";
    cin >> thang ;
    cout << "nam: ";
    cin >> nam ;
    cin.ignore();
    cout << "Goi tinh: ";
    cin.get(Gioi_tinh ,3);
    cin.ignore();
    cout << "He so luong: ";
    cin >> He_so_luong;
    cin.ignore();
}

void Canbo::xuat(){
    cout << endl;
    cout << setw(10) << Ma_can_bo 
        << setw(15) << Ho_ten
        << setw(5) << ngay << setw(5) << thang << setw(8) << nam
        << setw(4) << He_so_luong  << endl;
}

double Canbo::luong(){
    return He_so_luong;
}

int main()
{
    cout << "Nhap vao so can bo: ";
    int n ; cin >> n; cin.ignore();
    Canbo *canbo = new Canbo[n];

    for( int i = 0 ; i < n ; i ++)
    {
        if( i == 0 )
        {
            cout << "Can bo thu nhat: "; 
        }
        else{
            cout << "Can bo thu " << i+1 << ": ";
        }
        canbo[i].nhap();
    }

// tìm hệ số lương cao nhất 
    
    for( int i = 0 ; i < n ; i ++ ) 
    {
        int Maximum = i;
        for( int j = i+1 ; j < n ; j++)
        {
            if( canbo[i].luong() < canbo[j].luong() )
            {
                Maximum = j; 
            }

            if( Maximum != i )
            {
                swap(canbo[i] , canbo[Maximum] ) ;
            }
        }
    }

    if( n > 1){
        
        cout << "Can bo co he so luong cao nhat: ";
        canbo[0].xuat();
        cout << "can bo co he so luong thap nhat: ";
        canbo[1].xuat(); 
    }
    else 
    {
        cout << "Chi co mot can bo va nguoi do chinh la: ";
        canbo[0].xuat();
    }

    delete[] canbo;
    return 0;
}