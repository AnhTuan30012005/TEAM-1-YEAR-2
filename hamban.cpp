#include <bits/stdc++.h>
using namespace std;

class a {

    private: 
        int so ; 
    public:     
        int set_so(int so){
          return  this->so = so ; 
        }    
        friend void tichcong ( a &  ) ; 
        int get_so(){
            return so ; 
        }
} ; 

void tichcong( a &b ){
   b.so = b.so * 10; 
}

int main() 
{
    a b ;
    b.set_so(100) ; 
    tichcong( b ) ; 
    cout << b.get_so() ; 

    return  0 ; 
}