#include <bits/stdc++.h>
using namespace std;

// tách tên và họ đệm
string tach_ten(string name)
{
    int vitridaucachcuoi = name.find_last_of(' ');
    string ten = name.substr(vitridaucachcuoi + 1);
    return ten;
}

string tach_ho(string name)
{
    int vitridaucachcuoi = name.find_last_of(' ');
    string ho = name.substr(0, vitridaucachcuoi);
    return ho;
}

class Canbo
{
protected:
    string MaCanBo;
    string HoTen;
    string DonVi;
    double HeSoLuong;

public:
    // thiet lap thuoc tinh
    void setMaCanBo(string MaCanBo)
    {
        this->MaCanBo = MaCanBo;
    }
    void setHoTen(string HoTen)
    {
        this->HoTen = HoTen;
    }
    void setDonVi(string Donvi)
    {
        this->DonVi = DonVi;
    }
    void setHeSoLuong(double HeSoLuong)
    {
        this->HeSoLuong = HeSoLuong;
    }

    // lay thong tin
    string getMaCanBo()
    {
        return MaCanBo;
    }
    string getHoTen()
    {
        return HoTen;
    }
    string getDonVi()
    {
        return DonVi;
    }
    double getHeSoLuong()
    {
        return HeSoLuong;
    };

    friend istream &operator>>(istream &in, Canbo &a);
    friend ostream &operator<<(ostream &out, Canbo &a);
    bool operator<(Canbo a);
};
bool Canbo::operator<(Canbo b)
{
    if (tach_ten(this->HoTen) != tach_ten(b.getHoTen()))
    {
        return tach_ten(this->HoTen) < tach_ten(b.getHoTen());
    }
    else
    {
        return tach_ho(this->HoTen) < tach_ho(b.getHoTen());
    }
}

istream &operator>>(istream &in, Canbo &a)
{
    cout << "\nMa: ";
    getline(in, a.MaCanBo);
    cout << "Ten: ";
    getline(in, a.HoTen);
    cout << "Don Vi: ";
    getline(in, a.DonVi);
    cout << "He so luong: ";
    in >> a.HeSoLuong;
    in.ignore();
    return in;
};
ostream &operator<<(ostream &out, Canbo &a)
{
    out << "\nHo va Ten: " << a.HoTen << endl
        << "Don Vi: " << a.DonVi << endl
        << "He so luong: " << a.HeSoLuong << endl;
    return out;
};

class CanBoGiangDay : public Canbo
{
private:
    double HeSoCV; // he so chuc vu
    int NamBD;     // nam bat dau
public:
    // set
    void setHeSoCV(double HeSoCV)
    {
        this->HeSoCV = HeSoCV;
    }
    void setNamBD(int NamBD)
    {
        this->NamBD = NamBD;
    }
    // get
    double getHeSoCV()
    {
        return HeSoCV;
    }
    int getNamBD()
    {
        return NamBD;
    }
    // phuong thuc nhap va lay thong tin
    friend istream &operator>>(istream &in, CanBoGiangDay &a);
    friend ostream &operator<<(ostream &out, CanBoGiangDay &a);
    // so nam cong tac 
    int getNamCongTac(){
        int namcongtac = 2024 - NamBD ; 
        return namcongtac ; 
    }
};

istream &operator>>(istream &in, CanBoGiangDay &a)
{
    Canbo &b = a;
    in >> b;
    cout << "He so chuc vu: ";
    in >> a.HeSoCV;
    in.ignore();
    do
    {
        cout << "Nam bat dau: ";
        in >> a.NamBD;
        in.ignore();
    } while (2000 >= a.NamBD || a.NamBD >= 2024);

    return in;
}

double HeSoPhuCapThamNien(int SoCongTac)
{
    if (SoCongTac >= 25)
    {
        return 0.3;
    }
    else if (15 <= SoCongTac && SoCongTac < 25)
    {
        return 0.2;
    }
    else if (5 <= SoCongTac && SoCongTac < 15)
    {
        return 0.1;
    }
    else if (SoCongTac < 5)
    {
        return 0;
    }
    return 0 ; 
}

ostream &operator<<(ostream &out, CanBoGiangDay &a)
{
    Canbo &b = a;
    out << b;
    out << "He so chuc vu: " << a.HeSoCV  << endl;
    int NamCongTac = 2024 - a.NamBD;
    out << "So nam cong tac: " << NamCongTac << endl;
    double Luong = 1800000 * (a.HeSoLuong + a.HeSoCV + HeSoPhuCapThamNien(NamCongTac));
    out << "Luong: "<< fixed  << Luong << endl ; 
    return out;
}

// tao ham nam cong tac 
int namcongtac( int nambatdau ){
   return 2024 - nambatdau ;  
}

double luong( double hesoluong , double hesochucvu , double phucapthamnien ){
    return 1800000 * (hesoluong +  hesochucvu + phucapthamnien) ; 
}

void gach(){
    for( int i = 0 ; i < 10; i++){
        cout <<"-" ; 
    }
    cout << endl;
}

int main()
{
    int n;
    do{
        cout << "So luong can bo giang day: ";
        cin >> n; cin.ignore();
    }while( n <= 0 || n > 50 ) ; 
    CanBoGiangDay a[n] ; 
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> a[i] ; 
    }
// in ra danh dach sau khi sort 
    // sort( a , a +  n ) ;

    // for( int i = 0 ; i < n ; i ++ )
    // {
    //     cout << a[i] ; 
    // }
// nam cong tac ;
    // int it = namcongtac(a[0].getNamBD()) ; 
    // for( int i = 0 ; i < n ; i ++ ){
    //     if( it > namcongtac(a[i].getNamBD()) ){
    //         it = namcongtac(a[i].getNamBD()) ; 
    //     }
    // } 
    // gach ; 
    // cout << "SO NAM CONG TAC IT NHAT " << endl ; 
    // for( int i = 0 ; i < n ;  i++){
    //     if(namcongtac(a[i].getNamBD()) == it ){
    //         cout << a[i] << endl; 
    //     }
    // }

// tim so luong cac don vi khac nhau
    int tongdonvi = 1 ;
    string donvi = a[0].getDonVi() ;  
    for( int i = 0 ; i < n ; i++)
    {
        if(donvi != a[i].getDonVi()){
            tongdonvi++ ; 
    }}

// lưu các đơn vị hiện có đó   
    string DONVI[tongdonvi] ;  
    DONVI[0] == a[0].getDonVi() ; 
      
    int k = 0 ; 
    while (k < tongdonvi)
    {   
        for(int i = 0 ; i  < n ; i++){
            if(a[i].getDonVi() != DONVI[0]){
                DONVI[k] = a[i].getDonVi() ;
                k++ ;      
            }
        }
        
    }
// thục hiện phép tìm kiến và tìm số lớn nhất ; 
    for( int i = 0 ; i < tongdonvi ; i++){
        int max = 0 ; 
        // tìm số lương lớn nhất của đơn vị đó 
        for( int j = 0 ; j < n ; j ++){
            if( DONVI[i] == a[j].getDonVi()){
                if(luong( a[j].getHeSoLuong() , a[j].getHeSoCV() , HeSoPhuCapThamNien(namcongtac(a[j].getNamBD()))) > max ){
                    max = luong(a[j].getHeSoLuong() , a[j].getHeSoCV() , HeSoPhuCapThamNien(namcongtac(a[j].getNamBD()))) ; 
                }
            }
        }
// in ra các lớp có cùng đơn vị và cùng số tiền cao nhất 
        gach() ; 
        cout <<"Nhung can bo co so luong cao nhat cua don vi: " << DONVI[i] <<" la: "<< endl; 
        for( int i = 0 ; i < n ; i ++ )
        {
            if( luong( a[i].getHeSoLuong() , a[i].getHeSoCV() , HeSoPhuCapThamNien(namcongtac(a[i].getNamBD()))) == max  ){
                cout << a[i] ; 
            }
        }
    }


    cout << "\nKet thuc chuong trinh : xin chao va hen gap lai " ; 
    return 0;
}