#include <bits/stdc++.h>
using namespace std;

class Hinh_Tron
{
    private: 
        double r;      
    public: 
    // bán kính mặc định là 0.0
         Hinh_Tron()
        {
            r = 0.0;
        };
    // khởi tạo tham số: Nhận bán kính làm tham số
        Hinh_Tron(double r)
        {
            this->r = r;
        };
    // hàm xuất ra    
        void Xuat();
        
    // trả về tính diện tích   
        double get_r()
        {  
            return r * r * M_PI;
         };
};

void Hinh_Tron::Xuat()
{
  
        cout << fixed << setprecision(2);
        cout << "Diện tích hình tròn là: " << endl ;
        cout  << setw(14) << get_r();
      
}

int main()
{   
    cout << "Nhập vào bán kính hình tròn: ";
    double r;
    cin >> r; 
// khai báo hai con trỏ kiểu circle     
    Hinh_Tron *tron1 = new Hinh_Tron();
    Hinh_Tron *tron2 = new Hinh_Tron(r);

    tron2->Xuat();    
// giải phóng bộ nhớ 
    delete tron1;
    delete tron2;

    return 0;
}