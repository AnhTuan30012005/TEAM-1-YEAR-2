/*
Bài toán hoán đổi vị trí của hai số khi dùng class có sử dụng friend ; 
*/


#include <bits/stdc++.h>
using namespace std;

class B ; 
class A{
    private: 
        int so1 ; 
    public: 
        void xuat(){
            cout << "\nso A sau khi thay doi la: " << so1  ;  
        }  
        void nhap(){
            cout << "Nhap vao so A: "; cin >> so1  ; 
        }  
        friend void hd( A &ob1 , B &ob2);
};

class B{
    private: 
        int so2;
    public: 
        void xuat(){

            cout << "\nso B sau khi thay doi la: " << so2 ;
        }  
         void nhap(){
            cout << "Nhap vao so B: "; cin >> so2  ; 
        }  
        friend void hd( A &ob1 , B &ob2)      ;
};

void hd( A &ob1 , B &ob2 )
{
    int hi = ob1.so1 ; 
    ob1.so1 = ob2.so2 ; 
    ob2.so2 = hi ;
} ; 

int main()
{
    A a ; a.nhap() ;
    B b ; b.nhap() ; 

    hd(a , b) ; 

    a.xuat() ; 
    b.xuat() ; 


    return 0 ; 
}