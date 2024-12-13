#include <bits/stdc++.h>
using namespace std;

class chung
{
private:
protected:
    int tuoi;
    string name;
    void nhap()
    {
        cout << "Tuoi: ";
        cin >> tuoi;
        cin.ignore();
        cout << "Ten: ";
        getline(cin, name);
    };
    void xuat()
    {
        cout << "Tuoi " << tuoi << " Ten: " << name << endl;
    };
} ; 
class B;

class A : public  chung
{
private:
protected:
public:
    void nhap()
    {
        chung::nhap();
    };
    void xuat()
    {
        chung::xuat();
    };
    friend void hoandoi(A &a, B &b);
};

class B : public chung
{
private:
protected:
public:
    void nhap()
    {
        chung::nhap();
    };
    void xuat()
    {
        chung::xuat();
    };
    friend void hoandoi(A &a, B &b);
};

void hoandoi( A &a , B  &b){
    int tuoi = a.tuoi ; 
    a.tuoi = b.tuoi ; 
    b.tuoi = tuoi ; 

    string name = a.name ; 
    a.name = b.name ;
    b.name = name ; 

}
int main()
{   
    A a ; B b; 
    a.nhap() ; b.nhap() ; 

    cout << " a va b sau khi hoan doi la: " << endl; 
    hoandoi( a , b ) ; 
     a.xuat() ; b.xuat() ; 


    return 0;
}