#include <bits/stdc++.h>
using namespace std;

struct SINHVIEN
{
    string MSV; 
    string Name;
    string Class;
    double tb;
};

void Sap_xep(SINHVIEN *sv , int n )
{
    for( int i = 0 ; i < n; i++){
        int max = i;
        for( int j = i+1 ; j < n ; j++)
        {
            if( sv[i].tb < sv[j].tb )
            {
                max = j;
            }
        }
        if( max != i)
    {
        swap(sv[i] , sv[max]);
    }
    }
    
}

void in( SINHVIEN *sv , int n)
{   cout << fixed << setprecision(2);
    for( int i = 0 ; i < n ; i ++ )
    {
        cout << "\n"<< i+1 <<".\n";
        cout << sv[i].MSV << endl;
        cout << sv[i].Name << endl;
        cout << sv[i].Class << endl;
        cout << sv[i].tb << endl;
    }
};

int main()
{   
    int n ;
    cout << "Nhap vao so luong sinh vien: "; cin >> n;
    // cấp phát bộ nhớ cho mảng struct 
    SINHVIEN* sv = new SINHVIEN[n]; 
    for( int  i = 0 ; i < n ; i ++)
    {   cin.ignore();
        cout << "Nhap ma sinh vien: ";
        getline( cin , sv[i].MSV);
        cout << "Nhap ten day du cua sinh vien: ";
        getline( cin , sv[i].Name);
        cout << "Nhap lop: ";
        getline( cin , sv[i].Class);
        cout << "Nhap diem trung binh: ";
        cin >> sv[i].tb;
    }

    Sap_xep(sv , n);
    in(sv , n);


    // Giải phóng bộ nhớ
    delete[] sv;

    return 0;
}