/*
Xây dựng lớp Sophuc để mô tả các đối tượng là số phức, với các
thuộc tính là phần thực và phần ảo. Các phương thức bao gồm: Nhập
, xuất dữ liệu , cộng hai số phức ( yêu cầu hàm trả về kiểu dữ liệu
Sophuc). Lưu ý: Số phức = phần thực + phần ảo, để cộng hai số phức 
ta cộng các phần thực với nhau, cộng các phần ảo với nhau. 
*/
// ĐẶC BIỆT CÓ SỬ DỤNG HÀM FRIEND 

// làm tiếp phần hai 

#include <bits/stdc++.h>
using namespace std;

class sp
{
    private: 
        int thuc ; 
        int ao ; 
    public: 
        void nhap() ; 
        void xuat() ; 
        sp Cong( sp sp1 ) ; 
};

void sp::nhap()
{
    cout << endl;
    cout << "so thuc: " ; cin >> thuc ; 
    cout << "so ao: " ; cin >> ao ; 
}

void sp::xuat(){
    cout << "\n" << "Ket qua: " << thuc <<  " + "<< ao << "i";
}

sp sp::Cong( sp sp1  ){
            sp s; 
            s.thuc = thuc + sp1.thuc  ; 
            s.ao = ao + sp1.ao  ;

            return s ; 
        }        
int main() 
{
    sp sp1 , sp2 , sp3 ; 
    sp1.nhap() ; 
    sp2.nhap() ; 

    sp3 = sp1.Cong(sp2); 
    sp3.xuat() ; 

    return 0 ; 
}