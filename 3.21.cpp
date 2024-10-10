#include <bits/stdc++.h>
using namespace std;
// xây dựng lớp thí sinh
class Candidate
{
    private:
        char ma[10];
        string ho_ten;
        int ngay ;
        int thang ;
        int nam ;
        double Toan ; 
        double Van ; 
        double Anh ; 
    public:
        void nhap();
        void xuat();
        double tong(); 

};
// hàm nhập 
void Candidate::nhap(){
    cout << "Ma thi sinh : ";
    cin.getline(ma , 10);
    cout << "Họ và tên: ";
    getline(cin , ho_ten);
    cout << "Ngay: ";
    cin >> ngay ;
    cout << "Thang: ";
    cin >> thang;
    cout <<"Nam: ";
    cin >> nam ;
    cout << "Diem toan: ";
    cin >> Toan;
    cout << "Diem van: ";
    cin >> Van;
    cout << "Diem Anh: ";
    cin >> Anh ; 
    cin.ignore();
}
// hàm xuất 
void Candidate::xuat(){
    cout << setw(15) << ma;
    cout << setw(20) << ho_ten;
    cout << setw(10) << ngay << setw(10) << thang << setw(10) << nam  << "\n";
    // có thể dùng cout << setw(10) << left // right << ... để căn trái hoặc căn phải 
}
// hàm tính tổng 
double Candidate::tong(){
    return Toan + Anh + Van; // trả về tổng điểm toán và điểm văn 
}

int main()
{   cout << "Nhập vào số lượng thí sinh :  ";
    int n ; cin >> n ; 
    cin.ignore();
    Candidate thisinh[n];
// nhập vào từng thí sinh theo danh sách n 
    for( int i = 0 ; i < n ; i ++ ){
        cout << "Thí sinh thứ " << i+1 << ": \n";
        thisinh[i].nhap();
    }

    cout << setw(10) << "Ma thi  sinh: "   
        << setw(20) << "Ho va ten : "
        << setw(10) <<" ngay" << setw(10) << "thang" << setw(10) <<"nam"  << "\n";

// nếu thí sinh lớn hơn 15 thì xuất ra     
    for( int i = 0 ; i < n ; i ++ ){
        if( thisinh[i].tong() > 15.00)
        {
            thisinh[i].xuat();
        }
    }

    return 0;
}