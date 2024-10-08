#include <bits/stdc++.h>
using namespace std;

struct SINHVIEN
{
    string fullname;
    double toan;
    double van;
};
int main()
{
    SINHVIEN sv;
    cout << "Nhap ho va ten: ";
    getline(cin , sv.fullname);
    cout << "Nhap diem toan: ";
    cin >> sv.toan;
    cout << "Nhap diem van: ";
    cin >> sv.van; 

    cout << fixed << setprecision(2);
    cout << "Diem trung binh cua hoc sinh " << sv.fullname << " la: " << (sv.toan + sv.van ) / 2;
    return 0;
}