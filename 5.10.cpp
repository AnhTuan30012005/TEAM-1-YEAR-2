#include <bits/stdc++.h>
using namespace std;

string tach_ten(string ten_day_du) {
    int vitri_dau_cach_cuoi = ten_day_du.find_last_of(' ');
    int vitri_dau_cach_thu_hai = ten_day_du.find_last_of(' ', vitri_dau_cach_cuoi - 1);

    // string ho = ten_day_du.substr(0, vitri_dau_cach_thu_hai);
    // string dem = ten_day_du.substr(vitri_dau_cach_thu_hai + 1, vitri_dau_cach_cuoi - vitri_dau_cach_thu_hai - 1);
    string ten = ten_day_du.substr(vitri_dau_cach_cuoi + 1);

    return ten ;
}

string tach_ho( string ten_day_du ){
    int vitri_dau_cach_cuoi = ten_day_du.find_last_of(' ');
    int vitri_dau_cach_thu_hai = ten_day_du.find_last_of(' ', vitri_dau_cach_cuoi - 1);
    
    string ho_dem = ten_day_du.substr(0 , vitri_dau_cach_cuoi ) ; 

    return ho_dem ; 
}

class Person{
    protected:
        string name ;
        int tuoi ; 
    public: 
    // Hàm tạo
        Person(){
            name = "" ;
            tuoi = 0 ;  
        }
        Person(string name , int tuoi ){
            this->name = name ; 
            this->tuoi = tuoi ; 
        }
    // operator << >>
        friend istream & operator >> ( istream & in , Person & a) ; 
        friend ostream & operator << ( ostream & out , Person & a) ;   
        bool operator < ( Person a ) ; 
    // set
        void set_name(string name ){
            this->name = name ; 
        }      
        void set_tuoi(int tuoi){
            this->tuoi = tuoi ; 
        }
    // get
        string get_name(){
            return name; 
        }        
        int get_tuoi(){
            return tuoi ; 
        }
    // bool tách tên     
        bool operator < (const Person& a) const ; 
            
} ;
    // thử hình thức xếp tên 
    bool Person::operator < ( Person a ){
        if( tach_ten(this->name)  != tach_ten(a.get_name())){
            return tach_ten(this->name)  < tach_ten(a.get_name()) ; 
        } 
        else{
            return tach_ho(this->name)  < tach_ho(a.get_name()) ; 
        }
    }

    istream & operator >> ( istream & in , Person & a){
        cout << "Nhap ten: " ; getline( in , a.name) ; 
        cout << "Nhap tuoi: " ; in >> a.tuoi ; in.ignore() ;  

        return in ; 
    }
    ostream & operator << ( ostream & out, Person & a){
        out <<"\nTen: " << a.name <<" - Tuoi: " << a.tuoi << endl;  
        
        return out ; 
    }


class Student : public Person{
    private:    
        string masv ; 
        string nganh ; 
        double gpa ; // điểm trung bình
    public: 
    // ham tao lop Student 
        Student() : Person(){
            masv = "" ; 
            nganh = "" ; 
            gpa = 0.0 ; 
        }
        Student(string name , int tuoi , string masv, string nganh , double gpa ) : Person( name , tuoi ){
            this->masv = masv ; 
            this->nganh = nganh ; 
            this->gpa = gpa ; 
        }
    // operator << >> 
        friend istream & operator >> ( istream & in , Student & a) ; 
        friend ostream & operator << ( ostream & out , Student & a) ; 
    // set
        void set_masv(string masv){
            this->masv = masv ; 
        }        
        void set_nganh(string nganh){
            this->nganh = nganh ; 
        }
        void set_gpa(double gpa){
            this->gpa = gpa ; 
        }
    // get
        string get_masv(){
            return masv ; 
        }
        string get_nganh(){
            return nganh ; 
        }
        double get_gpa(){
            return gpa ; 
        }
    // xuat va xep hang sinh vien
        void xuat(){
            cout << "Ma sv: " << masv ; 
            Person & b = *this; 
            cout << b ; 
            cout << "Nganh: " << nganh << endl;
            cout << "Diem trung binh: " << gpa << endl ; 
            cout << "Xep loai: "; 
            if( gpa >= 5.0){
                cout << "Dat" << endl;
            } 
            else{
                cout << "No" << endl; 
            }
        
        }
} ; 

istream & operator >>  (istream & in , Student & a){
    cout << "Nhap ma sv: " ; getline( in , a.masv ); 
    Person & b = a ; 
    in >> b ;  
    cout << "Nhap nganh: " ; getline( in , a.nganh ) ; 
    cout << "Diem trung binh: " ; in >> a.gpa ; in.ignore() ; 
    return in ; 
}
ostream & operator << ( ostream & out , Student & a )
{   out << "Ma sinh vien: " << a.masv << endl; 
    Person & b = a ; 
    out << b;
    out << "Nganh: " << a.nganh << endl; 
    out << "GPA: " << a.gpa  << endl;  
   return out; 
}


int main()
{   int n ; // dai dien cho so luong sinh vien
    do{
        cout << "So luong sinh vien: " ;
        cin >> n ; cin.ignore() ; 
        }while(n <= 0 || n > 50 ) ; 
    Student a[n] ; 
    for( int i = 0 ; i < n ; i ++){
        cout << endl; 
        cin >> a[i] ;  
    }

    sort( a , a + n ) ; 

    cout << "Sau khi sắp xếp: " << endl; 
    for( int i = 0 ; i < n ; i ++ )
    {
        cout << a[i] ; 
    }

    return 0 ; 
}