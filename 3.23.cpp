#include <bits/stdc++.h>
using namespace std;

class DiemTS 
{
    private:
        char MaSV[10]; 
        string Ho_Ten;
        int ngay , thang , nam ; 
        char Gioi_tinh[4] ; 
        double Mon_1 , Mon_2 , Mon_3 , Trung_Binh;
    public: 
        void Nhap();
        void Xuat();
        double Get_TB();
        bool Lon5();
};

void DiemTS::Nhap(){
    cout << "Ma sinh vien: ";
    cin.get(MaSV , 10);
    cin.ignore(); 
    cout << "Ho ten: ";
        cin.ignore(); 
    getline(cin , Ho_Ten);
    cout << "Ngay: ";
    cin >> ngay;
    cout << "Thang: ";
    cin >> thang;
    cout << "Nam: ";
    cin >> nam;
    cout << "Gioi tinh: ";
    cin.ignore(); 
    cin.get(Gioi_tinh , 4);
    cout << "Diem mon 1: ";
    cin >> Mon_1;
    cout << "Diem mon 2: ";
    cin >> Mon_2;
    cout << "Diem mon 3: ";
    cin >> Mon_3;
    cin.ignore();
}

void DiemTS::Xuat(){
    cout << setw(12) << MaSV
        << " " << Ho_Ten <<" "
        << setw(4) << ngay << setw(4) << thang << setw(6) << nam 
        << setw(5) <<Gioi_tinh 
        << fixed <<setprecision(2) 
        << setw(6) << Trung_Binh << endl;
}

double DiemTS::Get_TB()
{   
    Trung_Binh = (Mon_1 + Mon_2 + Mon_3) / 3;
    return Trung_Binh;
}

bool DiemTS::Lon5()
{
   
    return Mon_1 > 4 &&  Mon_2 > 4 && Mon_3 > 4; 
       
    }


int main()
{
    cout << "Nhập vào số lượng sinh viên: ";
    int n ; cin >> n ; cin.ignore();

    DiemTS *ts = new DiemTS[n];

    for( int i = 0 ; i < n ; i ++)
    {   cout << "Sinh vien thu " << i+1 <<": \n" << endl;
        ts[i].Nhap();
        ts[i].Get_TB();
    }
// tìm ra sinh viên có điểm trung bình lớn nhất, và sinh viên có điểm trung bình bé nhất 
    for( int i = 0 ; i < n ; i++ )
    {
        int max = i ;
        for( int j = i+1 ; j < n  ; j++)
        {
            if( ts[max].Get_TB() < ts[j].Get_TB()  ){
                max = j;
            }

            if( max != i )
            {
                swap( ts[i], ts[max] );
            }
        }
    }
// in ra 
    if( n > 1 )
    {
        cout << "Sinh vien co diem trunng binh cao nhat:  \n";
        ts[0].Xuat();
        cout <<"Sinh vien co diem trung binh thap nhat: \n";
        ts[n-1].Xuat();

        cout << "Sinh vien không co mon nao duoi 5 la: \n";
    
    for( int i = 0 ; i < n ; i ++)
    {
        if( ts[i].Lon5())
        {
            ts[i].Xuat();
        }
    }
    }
    else{
        cout << "\nChi co mot phan tu duy nhat : " ; 
        ts[0].Xuat();
    }
    

    delete[] ts;
    return 0;
}