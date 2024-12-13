#include <bits/stdc++.h>
using namespace std ;

class Mayin{
    private:
        int trongluong; 
        int namsx ; 
        string hangsx ; 
    public: 
        void nhap() ; 
        void xuat() ;     
} ; 

void Mayin::nhap(){
    cout << "\nTrong luong: " ; cin >> trongluong ; cin.ignore() ; 
   do{
     cout << "Nam san xuat: "; cin >> namsx ; cin.ignore() ; 
   }while( namsx < 1900 || namsx > 2024) ; 
    cout << "Hang san xuat: " ; getline(cin , hangsx ) ;  
    }
void Mayin::xuat(){
    cout << "\nTrong luong: " << trongluong << endl; 
    cout << "Nam san xuat: " << namsx << endl;
    cout << "Hang sang xuat: " << hangsx << endl;  
}    

class Mayinkim : public Mayin{
    private:
        int sokim;
        int tocdo;
    public: 
        void nhap(){
            Mayin::nhap() ; 
            cout << "So kim: " ; cin >> sokim ; cin.ignore() ; 
            cout << "Toc do: " ; cin >> tocdo ; cin.ignore() ; 
        } ; 
        void xuat(){
            Mayin::xuat() ;
            cout << "So kim: " << sokim << endl;
            cout << "Toc do: " <<  tocdo <<" (trang/phut)"<< endl; 
        }
} ; 

class MayinLaser : public Mayin{
    private:
        int dophangiai; 
        int tocdoin ; 
    public: 
        void nhap(){
            Mayin::nhap() ; 
            cout << "Do phan giai: " ; cin >> dophangiai ; cin.ignore() ; 
            cout << "Toc do in: " ; cin >> tocdoin ; cin.ignore() ; 
        }
        void xuat(){
            Mayin::xuat() ; 
            cout << "Do phan giai: " << dophangiai << endl;
            cout << "Toc do in: " << tocdoin << endl ; 
        }
};

int main(){

    Mayinkim mik ; 
    MayinLaser mil; 

    mik.nhap() ; 
    mil.nhap() ; 

    cout << "                    Thong tin may in " << endl  ; 
    cout << "May in kim: "; 
    mik.xuat() ; 
    cout << "\nMay in laser: " ; 
    mil.xuat() ; 

    return  0 ; 
}