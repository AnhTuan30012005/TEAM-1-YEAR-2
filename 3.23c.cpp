/*
Xây dựng lớp Sophuc để mô tả các đối tượng là số phức, với các
thuộc tính là phần thực và phần ảo. Các phương thức bao gồm: Nhập
, xuất dữ liệu , cộng hai số phức ( yêu cầu hàm trả về kiểu dữ liệu
Sophuc). Lưu ý: Số phức = phần thực + phần ảo, để cộng hai số phức 
ta cộng các phần thực với nhau, cộng các phần ảo với nhau. 
*/
// ĐẶC BIỆT CÓ SỬ DỤNG HÀM FRIEND 

#include <bits/stdc++.h>
using namespace std;

class Sophuc
{
    private: 
        int thuc ;
        int ao ; 
    public: 
        void nhap() ; 
        void xuat() ; 
        friend Sophuc Cong( Sophuc sophuc1 , Sophuc sophuc2 );
};

void Sophuc::nhap(){
    cout << "So thuc: " ; 
    cin >> thuc ;
    cout << "So ao: " ;
    cin >> ao ;
}

void Sophuc::xuat(){
    cout << thuc << " + " << ao <<"i" ; 
}
Sophuc Cong( Sophuc sophuc1 , Sophuc sophuc2 )
{
    Sophuc sp ; 
    sp.thuc = sophuc1.thuc + sophuc2.thuc ;
    sp.ao = sophuc1.ao + sophuc2.ao  ; 
    
    return sp;

}
int main()
{
    Sophuc s1 , s2 ,s3 ; 
    
    s1.nhap() ; 
    s2.nhap() ;
    s3 = Cong(s1 , s2 ) ; 
    s3.xuat() ; 

    return 0 ; 
}