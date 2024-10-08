#include <bits/stdc++.h>
using namespace std;

double tam_giac( double n, double m);
double chu_nhat( double a , double b);
double tron( double r);

int main()
{   
    cout <<fixed << setprecision(2);
    cout << "Nhap vao cac canh cua hinh tam giac: ";
    double n , m; 
    cin >> n >> m;
    cout << " Nhap vao cac canh cua hinh chu nhat : ";
    double a , b;
    cin >> a >> b;
    cout << "Nhap vao ban kinh hinh tron: ";
    double r; cin >> r;

    cout <<"-Dien tich hinh tam giac la: "<< tam_giac( n , m) << endl;
    cout << "-Dien tich hinh chu nhat la: " << chu_nhat(a ,b);
    cout << "-Dien tich hinh tron la: " << tron( r ); 
    return 0; 
}
// diện tích hình tam giác
double tam_giac( double n , double m)
{
    return (n * m)/ 2; 

};
// diện tích hình chữ nhật
double chu_nhat( double a , double b)
{

    return a * b ;
}
// diện tích hình tròn 
double tron( double r )
{
    return r * r * M_PI;
};