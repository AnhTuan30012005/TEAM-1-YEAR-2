/*
Xây dựng lớp Sophuc để mô tả các đối tượng là số phức, với các
thuộc tính là phần thực và phần ảo. Các phương thức bao gồm: Nhập
, xuất dữ liệu , cộng hai số phức ( yêu cầu hàm trả về kiểu dữ liệu
Sophuc). Lưu ý: Số phức = phần thực + phần ảo, để cộng hai số phức 
ta cộng các phần thực với nhau, cộng các phần ảo với nhau. 
*/

#include <bits/stdc++.h>
using namespace std;

class sophuc{
    private: 
        int thuc;
        int ao ; 
    public: \
        static int soluong ; 
        sophuc(){
            soluong++ ; 
        }
        sophuc cong(sophuc sp);
        void nhap() ;
        void xuat() ; 

};
int sophuc::soluong = 0 ;
void sophuc::nhap(){
    cout << "so phuc thu " << soluong << endl;
    cout <<"so thuc: "; 
    cin >> thuc ;
    cout << "so ao: ";
    cin >> ao ;
}

void sophuc::xuat(){
    cout <<"Ket qua la: " << thuc << " + " << ao << "i" ; 
}

sophuc sophuc::cong(sophuc sp)
{
   sophuc p;
   p.thuc =thuc + sp.thuc ;
   p.ao = ao + sp.ao ; 

   return p  ;  
}

int main()
{
    sophuc sp1 , sp2, s ;
    sp1.nhap() ; sp2.nhap() ; 
    s = sp1.cong(sp2) ; 
    s.xuat() ; 

    return 0;
}