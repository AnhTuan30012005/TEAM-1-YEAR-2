#include <bits/stdc++.h>
using namespace std;

class A{
    private: 
        int  m , n ;
    public:
    // quá tải toán tử nhập 
        friend istream & operator >>( istream & in , A & a) ;
        friend ostream & operator << ( ostream & out , A & a ) ;       
    // quá tải toán tử + , - , * , /  
        A operator +( A a) ; 
        A operator -( A a) ; 
        A operator *( A a) ; 
    // quá tải toán tử so sánh 
        bool operator < ( A a ) ; // hoac co the lam nguoc lai 
        // friend bool operator < ( A a , B b ){
        //  return a.m < b.m ; 
        //} ; 
        friend A cong(  A a , A b ){
            A temp ; 
            temp.m = a.m + b.m ; 
            temp.n = a.n + b.n ; 
            return temp ; 
        } ; 

} ; 


istream & operator >> ( istream & in , A & a){
    cout << "Nhap so m: " ; in >> a.m ; 
    cout << "Nhap so n: " ; in >> a.n ;

    return in ; 
}

ostream & operator << ( ostream & out , A & a){
    out << "\n M: "<< a.m << endl ; 
    out << " N: " << a.n << endl;

    return out ; 
}

A A::operator+( A b ){
    A tamthoi  ; 
    tamthoi.m = this->m + b.m ;
    tamthoi.n = this->n + b.n ; 
    return tamthoi ; 
} ;

A A::operator-( A b ){
    A tamthoi ; 
    tamthoi.m = this-> m  - b.n ; 
    tamthoi.n = this-> n -  b.n ;  

    return tamthoi ; 
}

A A::operator*( A b ){
    A tamthoi ; 
    tamthoi.m = this->m * b.m ; 
    tamthoi.n = this->n * b.n ; 

    return tamthoi ; 
} 

bool A::operator < ( A a ) 
{
    return this->m < a.m ; 
}

int main()
{
    A a , b , c , d , e; 
    cin >> a ; 
    cin >> b ; 
    
    c = a + b ; 
    d = a - b ; 
    e = a * b ; 

    cout <<"\nCong : "  << c ; 
    cout <<"\nTru : " << d ; 
    cout <<"\nNhan : "  << e ; 
    cout << "\n" << " thuc hien phep so sanh: " ; 
    if( a < b  ){
        cout << " m cua a  < m cua b " ;
    }
    else{
        cout << " m cua a > m cua b " ; 
    }

    // int n ; cin >> n ; 
    // A  f[n]  ; 
    // nhap vao ; 
    // su dung sort thi no mac dinh se dung < khi minh khai bao o tren 
    // sort( f , f + n ) ; 

    return 0 ; 
}