#include <bits/stdc++.h>
using namespace std;

class Box {
    private: 
        double Dai;
        double Rong;
        double Cao;
    public:
        void Nhap();
        void Xuat();
        friend double The_tich(Box box ) ; 
};

void Box::Nhap()
{
    cout << "Chieu dai: "; 
    cin >> Dai  ;
    cout << "Chieu rong: " ;
    cin >> Rong ;
    cout << "Chieu cao: "; 
    cin >> Cao ; 
}

double The_tich(Box box) {
    return box.Cao * box.Dai * box.Rong;
}

void Box::Xuat()
{   
    cout << fixed << setprecision(2);
    cout << The_tich(*this) ;
}

int main()
{
    Box box;
    
    box.Nhap() ; 
    box.Xuat();


    return 0;
}