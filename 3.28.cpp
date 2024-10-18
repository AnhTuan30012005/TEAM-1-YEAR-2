#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string ten;
    int tuoi;

public:
    static int soluong;
    Person()
    {
        soluong++;
    }
    void nhap();

};

void Person::nhap(){
    cout << "\n Ten: \n ";
    getline(cin , ten ) ; 
    cout << "Tuoi: \n";
    cin >> tuoi ;
    cin.ignore();
}


int Person::soluong = 0;

int
main()
{
    cout << " Nhap vao so luong: "; 
    int n ; cin >> n ;
    cin.ignore();    Person p[n] ; 

    for( int i = 0 ; i < n ; i++ )
    {
        p[i].nhap() ; 
    }

    cout << "So luong doi tuong cua lop Person la: " << Person::soluong;

    
    return 0;
}