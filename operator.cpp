#include <bits/stdc++.h>
using namespace std;

class Sinhvien{
    private: 
        int ma ;
        string name ; 
        int tuoi ; 
    public: 
        void nhap() ; 
        void xuat() ; 

        friend istream & operator >> ( istream & in ,  Sinhvien & a) ; 
        friend ostream & operator << ( ostream & out , Sinhvien & a) ; 

} ; 
    istream & operator >> ( istream &in , Sinhvien&a ){
        cout << "\nNhap ma:" ; in >> a.ma ; in.ignore() ; 
        cout << "Nhap ten: " ; getline(in , a.name) ; 
        cout << "Nhap tuoi:" ; in >> a.tuoi ; 

        return in ; 
    } ; 

    ostream& operator << ( ostream &out , Sinhvien &a)
    {
        out << "\nMa: " << a.ma  << endl;
        out << "Ten: " << a.name << endl; 
        out << "Tuoi: " << a.tuoi << endl;

        return out ;      
    }
int main()
{   
    Sinhvien sv ; 
    cin >> sv ; 
    cout << sv ; 


    return 0 ; 
}