#include <bits/stdc++.h>
using namespace std;

class nn {
private:
    int nho;
public:
    void nhap() {
        cout << "Nhap vao so: ";
        cin >> nho;
    }
    nn timNhoNhat(nn Nho) {
        nn small;
        small.nho = min(this->nho, Nho.nho);
        return small;
    }
    void xuat() {
        cout << "Gia tri nho nhat la: " << nho << endl;
    }
};

int main() {
    nn Nho1, Nho2, Nho3;
    Nho1.nhap();
    Nho2.nhap();
    Nho3 = Nho1.timNhoNhat(Nho2);
    Nho3.xuat();
    return 0;
}