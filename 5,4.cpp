#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void xuat()
    {
        cout << "Cout A";
    }
};

class B : public A
{
};                                                               // Đoạn code này có lỗi là vì chưa được gọi hàm xuat nên D chưa
                                                        // thể xuất ra 
                                                        // vì B và C kế thừa từ A nên D cx mang thuộc tính public của A , 
                                                        // nhưng chúng ta không thể gọi luôn A::xuat() bên trong hàm D ; 
                                                        // vì D không có định nghĩa A là gì 

class C : public A
{
};

class D : public B, public C
{
    // public:
    //     void xuat(){
    //         C::xuat() ;
    //     }
};

int main()
{

    D obj;
    obj.xuat();

    return 0;
}