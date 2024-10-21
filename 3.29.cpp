#include <bits/stdc++.h>
using namespace std;

struct Date
{
    int ngay;
    int thang;
    int nam;
};

class student
{
private:
    string msv;
    string name;
    string sex;
    Date ns;
    double DiemTuyen;

public:
    static int soluong ; 
    student()
    {
        msv = " " ;
        name = " " ;
        sex = " " ; 
        ns.ngay = 00;
        ns.thang = 00;
        ns.nam = 0000;
        DiemTuyen = 0.0;
        soluong++ ;
    }
    student(string msv,
            string name,
            string sex ,
            int ngay, int thang, int nam,
            double DiemTuyen)
    {
        this->msv = msv;
        this->name = name;
        this->sex = sex;
        ns.ngay = ngay;
        ns.thang = thang;
        ns.nam = nam;
        this->DiemTuyen = DiemTuyen;
        soluong++ ;
    }

    void xuat() ;  
} ; 

void student::xuat() {
    cout << "sinh vien thu " << soluong << ": " ; 
    cout << msv << " " 
        << name << " "
        <<setw(3) << ns.ngay 
        <<setw(3) << ns.thang 
        << setw(5) << ns.nam << "   "
        << sex << "  "
        << fixed << setprecision(2) << DiemTuyen << endl;
}

 int student::soluong = 0; 

int main()
{   
    student sv1 ; 
    sv1.xuat() ; 

    student sv2("23T1080089" , "Nguyen Anh Tuan" , "nam" , 30 , 01 , 2005 , 9.8 ) ; 
    sv2.xuat() ;  

    return 0;
}