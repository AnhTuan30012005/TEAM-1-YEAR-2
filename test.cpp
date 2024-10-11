#include <iostream>
using namespace std;

class Box {
private:
    double Dai;
    double Rong;
    double Cao;

public:
    // Hàm khởi tạo
    Box(double d, double r, double c) : Dai(d), Rong(r), Cao(c) {
        // Hàm khởi tạo này sẽ được gọi khi một đối tượng Box được tạo
    }

    // Hàm truyền tham số
    void setDimensions(double d, double r, double c) {
        Dai = d;
        Rong = r;
        Cao = c;
    }

    // Hàm xuất thông tin
    void showDimensions() {
        cout << "Chieu dai: " << Dai << endl;
        cout << "Chieu rong: " << Rong << endl;
        cout << "Chieu cao: " << Cao << endl;
    }
};

int main() {
    // Tạo đối tượng Box và khởi tạo giá trị thông qua constructor
    Box box1(3.0, 4.0, 5.0);
    box1.showDimensions();

    // Tạo một đối tượng Box khác và truyền tham số thông qua hàm set
    Box box2(0, 0, 0);  // Khởi tạo với giá trị mặc định
    box2.setDimensions(2.0, 3.0, 4.0);
    box2.showDimensions();

    return 0;
}
