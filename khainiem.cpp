                                                        // TÍNH KẾ THỪA TRONG C++   
#include <bits/stdc++.h>
using namespace std; 

// base class: class cha 
// derived class: class con
class Person{
    private:
        string name; 
        string address; 
    // protected: 

    public:
    // ham khoi tao
        Person(string name , string address ){
            this->name = name ; 
            this->address = address ; 
        }
        string get_name(){
            return name ; 
        }
        string get_address(){
            return address ; 
        }

        void set_Name(string name ){
            this->name = name ; 
        }
        void set_Address( string address){
            this->address = address ; 
        }
        void xuat(){
            cout << "Ho va ten: " << get_name()  
            << "\nDia chi: " << get_address() ;  
        } ; 
        void nhap() ; 
        
} ; 

    void Person::nhap(){
        cout << "Ten:" ; 
        getline(cin , name ) ; 
        cout << "Dia chi: "; 
        getline(cin , address) ; 
    }

// studen kế thừa person : cụ thể là kế thừa protec và public 
class Student : public Person{
    private:
        float gpa ; 
    public: 
        Student() : Person("" , ""){
		
		
		} ; 
        Student(string name , string address , float gpa) : Person(name , address)
        {  
            this->gpa = gpa ; 
        }
        float Get_Gpa() ;
        void Set_Gpa( float gpa){
            this->gpa = gpa  ; // hoặc có thể khai báo không cần this khi tên của thành phần khác nhau vd: gpa = GPA
        }
        void xuat() ; 
        void nhap(){
            Person::nhap() ; 
            cout << "GPA:" ; 
            cin >> gpa ; cin.ignore() ; 
        }
        // ~Student() ; // hàm hủy 
} ;

 float Student::Get_Gpa()
{
    return this->gpa; 
}

// Student::~Student(){
//     cout << "\nĐối tượng được hủy tại  đây!!!\n" ; 
// }

void Student::xuat(){
        Person::xuat() ; // nếu ko gọi hàm này thì nó chỉ in  r  gpa thôi 
       cout << fixed << setprecision(2) << "\nGPA: " << gpa ; 
}

// tạo ra một lớp giáo viên kế thừa lớp peroon
class Techer : public Person{
    private:    
        long long salary ; 
    public: 
        long long get_salary(){
            return salary ; 
        }   
        void set_salary(long long salary){
            this->salary = salary ; 
        }
} ; 

bool cmp(Student A , Student B )
{
    return A.Get_Gpa() > B.Get_Gpa() ; // trả về gpa 
}

int main(){

    // Student s("Nguyen anh tuan" , "Ha Tinh" , 2.4 ) ; 
    // // s.nhap() ; 
    // s.xuat() ; 

    // hoặc
    // s.Person::nhap() ; // nó chỉ nhập tên và địa chỉ
    // s.Person::xuat() ; // chỉ xuất tên và địa chỉ 
    cout << "Nhap vao so luong sinh vien: " ; 
    int n ; cin >> n ; cin.ignore() ; 
    Student a[100] ; 
    for( int i = 0 ; i < n ; i ++ )
    {
        a[i].nhap()  ; 
    }

    sort( a , a  + n ,  cmp) ; 

    for( int i = 0 ; i < n ; i ++ )
    {
        a[i].xuat() ; 
    }

    return 0 ; 
}
