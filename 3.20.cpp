#include<iostream>
using namespace std;

class MyClass 
{
    private: 
        int value;
    public: 
        MyClass& setvalue( int value ) // hàm này trả về một tham chiếu 
        {
            this->value = value;
            return *this; // trả về một tham chiếu  
            // return this-> value là sai , nó trả về giá trị số nguyên int ; 
        }

        void display()
        {
            cout << "Gia tri: " << value << endl;
        }

};

int main()
{
    MyClass obj;
    obj.setvalue(10).display() ; // gọi phương thức setValue và display theo chuỗi 

    return 0;
}