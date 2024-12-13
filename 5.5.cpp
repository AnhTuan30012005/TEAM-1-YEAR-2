#include <bits/stdc++.h>
using namespace std;

struct  DATE{
    int ngay , thang , nam ; 
} ; 

class Person{
    private: 
        string name ; 
        DATE date ; 
        string address ; 
    public: 
        void nhap() ; 
        void xuat() ; 
        int getNam(){
            return date.nam ; 
        }    

};

class Kysu : public Person{
    private: 
        string nganhhoc ;
        int namtot ; // nam tot nghiep 
    public: 
        void nhap()  ; 
        void xuat()  ;     
} ; 

void Person::nhap(){
    cout << "\nname: " ; getline(cin , name ) ; 
    cout << "ngay: " ; cin >> date.ngay ; cin.ignore() ; 
    cout << "thang: " ; cin >> date.thang ; cin.ignore() ; 
    cout << "nam: " ; cin >> date.nam ; cin.ignore() ; 
    cout << "dia chi: " ; getline(cin , address) ; 
}

void Person::xuat(){
    cout << "\nname: " << name ; 
    cout << endl << "(dd/mm/yy): " << date.ngay << " " << date.thang << " " << date.nam << endl;
    cout << "Song tai: " << address << endl;  
}

void Kysu::nhap(){
    Person::nhap() ; 
    cout << "nganh hoc: " ; getline(cin , nganhhoc) ; 
    cout << "nam tot nghiep: " ; cin >> namtot ; cin.ignore() ;  
}

void Kysu::xuat(){
    Person::xuat() ; 
    cout << "Nganh hoc: " << nganhhoc << endl; 
    cout << "Nam tot nghiep: " << namtot << endl ; 
}


int main(){

    int n ; cout << "Nhap vao so ky su: " ; 
    cin >> n ; cin.ignore() ; 
    Kysu ks[n] ; 

    for( int i = 0 ; i < n ;i++ )
    {
        ks[i].nhap() ; 
    }

    // thuc hien viec tim kiem 
    int max = ks[0].getNam() ; 

    for( int i = 0 ; i < n ; i ++ )
    {
        if( ks[i].getNam() > max && ks[i].getNam() <= 2024 ){
            max = ks[i].getNam() ; 
        }
    }

    // ketqua 

    cout << "\n Ket qua cuoi cung: \n" ; 
    for( int i = 0 ; i < n ; i++) {
        if( ks[i].getNam() == max ){
            ks[i].xuat() ; 
        }
    }
    return 0 ; 
}