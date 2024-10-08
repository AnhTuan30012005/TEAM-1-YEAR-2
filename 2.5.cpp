#include<bits/stdc++.h>
using namespace std;

// viết hàm tính giai thừa
long long giai_thua(int n){
    if( n == 1 || n == 0){
        return 1;
    }
    else{
        return n * giai_thua(n -1);
    }
}

int main(){

    int n;
    cout << "Nhap vao so tinh giai thua: ";
    cin >> n;

    cout << "Ket qua cua " << n << "! giai thua la: " << giai_thua(n) << "  .";

    return 0;
}