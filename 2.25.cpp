#include <bits/stdc++.h>
using namespace std;

double bac_nhat( double m , double n )
{
    return (-m)/n;
}

void bac_hai( double a , double b, double c )
{   cout << fixed << setprecision(1);
    double denta = b*b - ( 4*a*c);
    if( denta < 0 )
    {
        cout << "Chuong trinh vo nghiem !!!\n" ;
    }
    else if( denta == 0  )
    {
        cout << "Phuong trinh co nghiem kep la: x1 = x2 =  " << -(b/(2*a))<< endl;
    }
    else if( denta > 0 )
    { 
        cout << "Phuong trinh co nghiem: \n";
        cout << "x1 =  " << (-b + sqrt(denta))/(2*a) << endl;
        cout << "x2 =  " <<  (-b - sqrt(denta))/(2*a) << endl;
    }
}; 

int main()
{
    cout << "Phuong trinh bac nhat: \nNhap vao m va n \n";
    cout << "m: "; double m ; cin >> m;
    cout << "n: "; double n; cin >> n;
    cout <<"Phuong trinh bac hai: \nNhap vao a, b va c: \n";
    cout << "a: "; double a ; cin >> a;
    cout << "b: "; double b ; cin >> b;
    cout << "c: "; double c ; cin >> c;

    cout << "Kết quả phương trình bậc nhất: " << bac_nhat(m ,n) << endl;
    bac_hai(a , b , c);

    return 0 ;
}