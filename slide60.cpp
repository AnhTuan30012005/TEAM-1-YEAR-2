/* 
    tính diện tích hình chữ nhật
     không sử dụng hàm bạn 
*/

#include <bits/stdc++.h>
using namespace std ;

class DienTich{
    private: 
        int dai , rong ; 
    public: 
        DienTich(int dai , int rong){
            this->dai = dai ;
            this->rong = rong ; 
           cout << "Dien tich hinh chu nhat la: "<<  dai * rong ;
        }

};

int main()
{   
    int dai , rong ;
    cout <<"Chieu dai: " ;
    cin >> dai ;
    cout << "Chieu rong: " ; 
    cin >> rong ;
    
    DienTich DT(dai , rong) ; 

    return 0 ; 
}