#include <bits/stdc++.h>
using namespace std;

class MyClass
{
    private: 
        int value;
    public: 
      
        void setValue( int value)
        {
          this->value = value ;
        }

        //  void setValue( int value)
        // {
        //   value = value ; chỉ  thay đổi được biến cục bộ, nó không 
        // thể thay đổi được giá trị của value trong private và tất cả thành viên của lớp 
        // }

        int get_Value()
        {
            return value;
        }    

};

int main()
{
    MyClass mc;
    mc.setValue(7); 
    cout << "Gia tri : " << mc.get_Value();

    return 0;
}