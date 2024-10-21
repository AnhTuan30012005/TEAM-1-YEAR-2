/*
    tìm giá trị nhỏ nhất mà không cần hàm bạn 
*/

#include <bits/stdc++.h>
using namespace std ;

class nn{
    private:
        int nho ; 
    public: 
        void nhap();
        nn NN(nn Nho) ;
        void xuat(){
            cout << "Gia tri nho nhat la: " << nho  ; 
        } ; 
};

void nn::nhap(){
    cout << "Nhap vao so : " ; 
    cin >> nho  ;
}

nn nn::NN( nn Nho ){
    if( this->nho > Nho.nho ){
        this->nho = Nho.nho ; 
    }

    /*
    cũng có thể dùng phép gán như sau: 
    nn timNhoNhat(nn Nho) {
        nn small;
        small.nho = min(this->nho, Nho.nho);
        return small;
    }
    nếu không gán cho small thì không cần dùng đến nó, chỉ cần *this là ra 
    */

   return  *this ; 
}

int main()
{   
    nn Nho1 ,Nho2, Nho3 ; 
    Nho1.nhap() ; 
    Nho2.nhap() ; 

    Nho3 = Nho1.NN( Nho2 ) ; 

    Nho3.xuat() ; 

    return 0 ; 
}