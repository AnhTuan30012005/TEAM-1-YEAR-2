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
    cout << "\nMa can bo: ";
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
        << setw(20) << Ho_ten
        << setw(4) << ngay << setw(3) << thang << setw(7) << nam
        << setw(5) << He_so_luong  << endl;
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

    if( n < 2 )
    {   
        cout << "Chi co mot can bo duy nhat: "; 
        canbo[0].xuat() ; 
        return 1; 
    }

// tìm các cán bộ có hệ số lương cao và thấp
// trên 5.0 là cao và dưới 2.0 là thấp 
    cout << "Cac can  bo co he so luong thap nhat: \n";
    for( int i = 0 ; i < n ; i ++ )
    {
        if( canbo[i].luong() < 5.0 )
        {
            cout << " - \n" ; 
            canbo[i].xuat() ; 
        }
    }
    cout << "\n Cac can bo co he so luong cao nhat: \n"; 
    for( int i  = 0 ; i < n ; i ++ )
    {
        if( canbo[i].luong() >=   5.0 )
        {
            cout << " - \n" ; 
            canbo[i].xuat() ; 
        }
    }

    cout << "  --- Ket thuc danh sach --- ";

    delete[] canbo;
    return 0;
}