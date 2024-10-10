#include<bits/stdc++.h>
using namespace std;

class Circle 
{
    private: 
        float r;

    public: 
        Circle(){
            r = 0.0;
        }

        Circle( double r){
            this->r = r; 
        } 
    double Get_R(){
        return M_PI * r * rhttps://img3.thuthuatphanmem.vn/uploads/2019/06/13/anh-nen-co-gai-anime_095241204.jpg;
    }        
    void nhap();
    void xuat();

};

void Circle::nhap(){
    cout << "Nhap vao gia tri r: ";
    cin >> r ;
}

void Circle::xuat()
{   cout << fixed << setprecision(2);
    cout << setw(15) << Get_R();
}

int main()
{
    cout << "Nhập vào số lượng hình tròn: " ;
    int n ; cin >> n;
    Circle *tron = new Circle[n];

    for( int i = 0 ; i < n ; i ++ )
    {
        tron[i].nhap();
    }

    for( int i = 0 ; i < n ; i ++)
    {
        cout << "\nGia tri hinh tron thu " << i + 1 <<": \n";
        tron[i].xuat();

    }

    delete[] tron;
    return 0; 
}