/*
    Cách làm thứ hai của bài toán hoán đổi số, tôi đang thử nó ; 
*/

#include <bits/stdc++.h>
using namespace std;

class A {
    private: 
      int  so ; 
    public:
        static int soluong; 
        void nhap(){
            cout << "Nhap vao so: " ; 
            cin >> so  ; 
        }
        void xuat(){
            cout << "so sau khi duoc thay doi la: " << so  << endl; 
        }

        A hd( A &so1 ) ;     
}; 

A A::hd( A &so1 ){
    int t = this->so ; 
    this->so  = so1.so ; 
    so1.so =  t ;

    return *this ; 
} ;

int main()
{
    A a , b ; 
    a.nhap()  ; b.nhap() ; 

    a.hd(b) ; 
    a.xuat() ; 
    b.xuat() ; 

    cout << "\nthe end" ; 
    return 0; 
}