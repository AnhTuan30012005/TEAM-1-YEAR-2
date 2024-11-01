#include <bits/stdc++.h>
using namespace std;

class Phuongtien
{
private:
    string mpt;
    string tpt;
    int gia;
    int toc;

public:
    // hàm khởi tạo  ;
    Phuongtien()
    {
    }
// hàm hởi tạo có tham số ;
    Phuongtien(string mpt, string tpt, int gia, int toc)
    {
        mpt = mpt;
        tpt = tpt;
        gia = gia;
        toc = toc;
    }
    // phương thức thiết lập và lấy thông tin các thuộc tính ;
    string get_mpt()
    {
        return mpt;
    };
    string get_tpt()
    {
        return tpt;
    };
    int get_gia()
    {
        return gia;
    };
    int get_toc()
    {
        return toc;
    };
    void nhap();
    void xuat();
};

void Phuongtien::nhap()
{
    cout << "\nMa phuong tien:";
    getline(cin, mpt);
    cout << "Ten phuong tien: ";
    getline(cin, tpt);
    cout << "Gia thanh: ";
    cin.ignore();
    cin >> gia;
    cout << "Toc do: ";
    cin >> toc;
    cin.ignore();
}

void Phuongtien::xuat()
{
    cout << setw(10) << mpt
         << setw(10) << tpt
         << setw(8) << gia << "vnd"
         << setw(5) << toc  << "km/h";
}

int main()
{
    Phuongtien p1, p2, p3, p4;
    p1.nhap();
    p2.nhap();
    p3.nhap();

    p4 = p1;
    {
        if (p3.get_toc() > p1.get_toc())
        {
            p4 = p3;
        }
        if (p2.get_toc() > p1.get_toc())
        {
            p4 = p2;
        }
    }
    p4.xuat();

    return 0;
}