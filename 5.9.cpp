#include <bits/stdc++.h>
using namespace std;

struct Date
{
    int ngay, thang, nam;
};

class Canbo
{
private:
    string ma;
    string name;
    Date date; // ngay vao co quan
public:
    friend istream &operator>>(istream &in, Canbo &a);
    friend ostream &operator<<(ostream &out, Canbo &a);
    Canbo()
    {
        ma = " ";
        name = " ";
        date.ngay = 0;
        date.thang = 0;
        date.nam = 0;
    };
    Canbo(string ma, string name, int ngay, int thang, int nam)
    {
        this->ma = ma;
        this->name = name;
        this->date.ngay = ngay;
        this->date.thang = thang;
        this->date.nam = nam;
    }
    // lấy thông tin
    string get_ma()
    {
        return ma;
    }
    string get_ten()
    {
        return name;
    }
    int get_ngay()
    {
        return date.ngay;
    }
    int get_thang()
    {
        return date.thang;
    }
    int get_nam()
    {
        return date.nam;
    }
    // set
    void set_ma(string ma)
    {
        this->ma = ma;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_ngay(int ngay)
    {
        this->date.ngay = ngay;
    }
    void set_thang(int thang)
    {
        this->date.thang = thang;
    }
    void set_nam(int nam)
    {
        this->date.nam = nam;
    }

    // quá tải
    bool operator<(Canbo a);
};

bool Canbo::operator<(Canbo a)
{
    if (this->date.nam != a.date.nam)
        return this->date.nam < a.date.nam;
    if (this->date.thang != a.date.thang)
        return this->date.thang < a.date.thang;
    return this->date.ngay < a.date.ngay;
}

istream &operator>>(istream &in, Canbo &a)
{
    cout << "\nMa: ";
    getline(in, a.ma);
    cout << "Ten: ";
    getline(in, a.name);
    cout << "(dd/mm/yy): ";
    in >> a.date.ngay;
    in.ignore();
    in >> a.date.thang;
    in.ignore();
    in >> a.date.nam;
    in.ignore();

    return in;
}

ostream &operator<<(ostream &out, Canbo &a)
{
    out << "\nMa: " << a.ma << endl;
    out << "Ten: " << a.name << endl;
    out << "Ngay vao co quan: " << a.date.ngay << "/" << a.date.thang << "/" << a.date.nam << endl;
    return out;
}

class Giangvien : public Canbo
{
private:
    string donvi;
    int hesoluong;
    int phucap;

public:
    Giangvien() : Canbo()
    {
        donvi = " ";
        hesoluong = 0;
        phucap = 0;
    };
    Giangvien(string ma, string name, Date date, string donvi, int hesoluong, int phucap) : Canbo(ma, name, date.ngay, date.thang, date.nam)
    {
        this->donvi = donvi;
        this->hesoluong = hesoluong;
        this->phucap = phucap;
    }

    friend istream &operator>>(istream &in, Giangvien &a);
    friend ostream &operator<<(ostream &out, Giangvien &a);

    // get
    string get_donvi()
    {
        return donvi;
    }
    int get_hesoluong()
    {
        return hesoluong;
    }
    int get_phucap()
    {
        return phucap;
    }
    // set
    void set_donvi(string donvi)
    {
        this->donvi = donvi;
    }
    void set_hesoluong(int hesoluong)
    {
        this->hesoluong = hesoluong;
    }
    void set_phucap(int phucap)
    {
        this->phucap = phucap;
    }

    void xuat()
    {
        Canbo &b =  *this;
        cout << b ; 
        int tienluong = hesoluong * 2340000 + phucap;
        cout << "Luong: " << tienluong << " " << donvi;
    
    }
};

istream &operator>>(istream &in, Giangvien &a)
{
    Canbo &b = a ;
    in >> b;
    cout << "Donvi: ";
    getline(in, a.donvi);
    cout << "He so luong: ";
    in >> a.hesoluong;
    in.ignore();
    cout << "Phu cap: ";
    in >> a.phucap;
    in.ignore();

    return in;
};

ostream &operator<<(ostream &out, Giangvien &a)
{
    Canbo &b = a; // gọi operator của lớp Canbo để in thông tin chung
    out << b;     // Gọi operator << của lớp Canbo để in thông tin chung
    out << "Don vi: " << a.donvi << endl;
    out << "He so luong: " << a.hesoluong << endl;
    out << "Phu cap: " << a.phucap << endl;
    int tienluong = a.hesoluong * 2340000 + a.phucap;
    out << "Luong: " << tienluong << " " << a.donvi;
    return out;
}

int main()
{
    cout << "Nhap vao so luong giang vien: ";
    int n;
    cin >> n;
    cin.ignore();
    Giangvien a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sắp xếp
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    // tính lương trung bình
    int trungbinh = 0;
    for (int i = 0; i < n; i++)
    {
        trungbinh += a[i].get_hesoluong() * 2340000 + a[i].get_phucap();
    }
    cout << "\nLuong trung binh cac giang vien la: ";
    cout << fixed << setprecision(3)<< static_cast<double>(trungbinh / n);

    cout << "\nBang luong cua cac giang vien la: " ; 
    for( int i = 0 ; i < n ; i++)
    {
        cout << a[i] ; 
    }

    return 0;
}