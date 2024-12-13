#include <bits/stdc++.h>
using namespace std;

struct DATE
{
    int ngay, thang, nam;
};

class canbo
{
protected:
    string macanbo;
    string name;
    DATE date; // ngay vao co quan
public:
    void nhap();
    void xuat();
    canbo()
    {
        macanbo = "...";
        name = "...";
        date.ngay = 0;
        date.thang = 0;
        date.nam = 0;
    }
    canbo(string macanbo, string name, int ngay, int thang, int nam)
    {
        this->macanbo = macanbo;
        this->name = name;
        this->date.ngay = ngay;
        this->date.thang = thang;
        this->date.nam = nam;
    }
    // phương thức thiết lập thuộc tính
    void setMacanbo(string macanbo)
    {
        this->macanbo = macanbo;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setNgay(int ngay)
    {
        this->date.ngay = ngay;
    }
    void setThang(int thang)
    {
        this->date.thang = thang;
    }
    void setNam(int nam)
    {
        this->date.nam = nam;
    }
    // phương thức lấy thông tin
    string getMacanbo()
    {
        return macanbo;
    }
    string getName()
    {
        return name;
    }
    int getNgay()
    {
        return date.ngay;
    }
    int getThang()
    {
        return date.thang;
    }
    int getNam()
    {
        return date.nam;
    }
};

void canbo::nhap()
{
    cout << "\nMa can bo: ";
    getline(cin, macanbo);
    cout << "Ten: ";
    getline(cin, name);
    cout << "Ngay vao co quan: " << endl;
    do
    {
        cout << "Ngay: ";
        cin >> date.ngay;
        cin.ignore();
    } while (date.ngay < 1 || date.ngay > 31);
    do
    {
        cout << "Thang: ";
        cin >> date.thang;
        cin.ignore();
    } while (date.thang < 1 || date.thang > 31);
    do
    {
        cout << "Nam: ";
        cin >> date.nam;
        cin.ignore();
    } while (date.nam < 1900 || date.nam > 2024);
}

void canbo::xuat()
{
    cout << "\nMa can bo: " << macanbo << "  "
         << "Ten: " << name << "  "
         << "Ngay vao co quan: " << date.ngay << "/" << date.thang << "/" << date.nam << " ";
    ;
}

class giangvien : public canbo
{
private:
    string donvi;
    double hesoluong;
    double phucapchucvu;

public:
    void nhap();
    void xuat();
    // thiết lập thuộc tính
    void setDonvi(string donvi)
    {
        this->donvi = donvi;
    }
    void setHesoluong(double hesoluong)
    {
        this->hesoluong = hesoluong;
    }
    void setPhucapchucvu(double phucapchucvu)
    {
        this->phucapchucvu = phucapchucvu;
    }
    // lấy thuộc tính
    string getDonvi()
    {
        return donvi;
    }
    double getHesoluong()
    {
        return hesoluong;
    }
    double getPhucapchucvu()
    {
        return phucapchucvu;
    }
};

void giangvien::nhap()
{
    canbo::nhap();
    cout << "Don vi: ";
    getline(cin, donvi);
    cout << "He so luong: ";
    cin >> hesoluong;
    cin.ignore();
    cout << "Phu cap chuc vu: ";
    cin >> phucapchucvu;
    cin.ignore();
}

void giangvien::xuat()
{
    canbo::xuat();
    cout << "Don vi: " << donvi << "    ";
    cout << "He so luong: " << hesoluong << "   ";
    cout << "Phu cap chuc vu: " << phucapchucvu << " ";
    float tienluong = hesoluong * 2340000 + phucapchucvu;
    cout << "Luong: " << fixed << tienluong << endl;
}

void gach()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "* -";
    }
}

int main()
{
    int n; // so luong giang vien
    do
    {
        cout << "So luong giang vien: ";
        cin >> n;
        cin.ignore();
    } while (n < 1 || n > 50);
    giangvien gv[n]; // đối tượng giảng viên với n đối tượng
                     // nhập vào
    for (int i = 0; i < n; i++)
    {
        gv[i].nhap();
    }
    // sắp xếp theo ngày vào
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (gv[j].getNam() < gv[min].getNam())
            {
                min = j;
            }
            else if (gv[j].getNam() == gv[min].getNam())
            {
                if (gv[j].getThang() < gv[min].getThang())
                {
                    min = j;
                }
                else if (gv[j].getThang() == gv[min].getThang())
                {
                    if( gv[j].getNgay() < gv[min].getNgay()){
                        min = j ;
                    }
                }
            }
        }
        if (min != i)
        {
            giangvien temp = gv[i];
            gv[i] = gv[min];
            gv[min] = temp;
        }
    }
    // in ra
    gach(); // tao ra duong ke gach
    for (int i = 0; i < n; i++)
    {
        gv[i].xuat();
    }

    return 0;
}