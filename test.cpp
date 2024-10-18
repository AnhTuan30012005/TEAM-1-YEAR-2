#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    static int soLuongSinhVien ; // Biến tĩnh để đếm số lượng sinh viên
    SinhVien() {
        soLuongSinhVien++;
    }
};
    int SinhVien::soLuongSinhVien = 0;
// int SinhVien::soLuongSinhVien = 0; // Khởi tạo giá trị ban đầu là 0

int main() {
    SinhVien sv1, sv2, sv3;
    cout << "So luong sinh vien: " << SinhVien::soLuongSinhVien << endl; // In ra 3
    return 0;
}