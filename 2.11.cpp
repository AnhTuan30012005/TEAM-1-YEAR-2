#include <bits/stdc++.h>
using namespace std;

struct SINHVIEN
{
    string mahs;
    string fullname;
    string diachi;
    double toan;
    double van;
    double tb;
};
void tbc(SINHVIEN sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sv[i].tb = (sv[i].toan + sv[i].van) / 2;
    }

    // thực hiện sắp xếp
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (sv[j].tb > sv[max].tb)
            {
                max = j;
            }
        }
        if (max != i)
        {   // swap nghĩa là hoán đổi luôn mọi thứ kể cả họ tê, và nó được xếp theo thứ tự 
            swap(sv[i], sv[max]); // hoán đổi sinh viên
        }
    }

    cout << "Hoc sinh co diem trung binh cao nhat la: " << sv[0].fullname << " voi so diem la: " << sv[0].tb << endl;
}
int main()
{
    int n;
    cout << "Nhap vao so danh sach sinh vien: ";
    cin >> n;
    cin.ignore(); // xóa bộ nhớ đêm sau khi nhập n 
    SINHVIEN sv[n];

    for (int i = 0; i < n; i++)
    {
        cout << "-- Sinh vien thu " << i + 1 < < " : " << endl;
        cout << "Nhap ma sinh vien: ";
        getline(cin, sv[i].mahs);
        cout << "Nhap ho va ten: ";
        getline(cin, sv[i].fullname);
        cout << "Nhap dia chi: ";
        getline(cin, sv[i].diachi);
        cout << "Nhap diem toan: ";
        cin >> sv[i].toan;
        cout << "Nhap diem van: ";
        cin >> sv[i].van;
        cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập điểm
    }   
    // gọi hàm
    tbc(sv, n);

    return 0;
}