// so sánh hai phân số
#include <bits/stdc++.h>
using namespace std;

void phanso(double t1, double m1, double t2, double m2)
{  
    if (m1 == m2)
    {
        if (t1 > t2)
        {
            cout << "Phan so lon nhat la: " << endl;
            cout << t1 << endl;
            cout << "--" << endl;
            cout << m1 << endl;
        }
        else if (t1 == t2)
        {
            cout << "Ca hai deu bang nhau";
        }
        else
        {
            cout << "-Phan so lon nhat la: " << endl;
            cout << t2 << endl;
            cout << "--"<< endl;
            cout << m2 << endl;
        }
    }
    else
    {
        double so1 = t1 / m1;
        double so2 = t2 / m2;
        if (so1 > so2)
        {
            cout << "Phan so lon nhat la: " << endl;
            cout << t1 << endl;
            cout << "--"<< endl;
            cout << m1 << endl;
        }
        else if (so1 == so2)
        {
            cout << "Ca hai deu bang nhau";
        }
        else
        {
            cout << "-Phan so lon nhat la: " << endl;
            cout << t2 << endl;
            cout << "--" <<endl;
            cout << m2 << endl;
        }
    }
}

int main()
{

    double t1, m1, t2, m2;
    cout << "Phan so thu nhat: ";
    cin >> t1 >> m1;
    cout << "Phan so thu hai: ";
    cin >> t2 >> m2;

    phanso(t1, m1, t2, m2) ;
    return 0;
}