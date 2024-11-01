#include <bits/stdc++.h>
using namespace std ; 

struct Ngaykhoihanh{
    int ngay , thang , nam ; 
} ;

class TourDuLich{
    private:
        string matua ; 
        string tentua ; 
        Ngaykhoihanh nkh ;
        string pt ;
        double gia ;  
    public: 
        void nhap() ; 
        void xuat() ; 
        string get_ma(){
            return matua ; 
        }
        double get_gia()
        {
            return gia ; 
        }
        string get_pt(){
            return pt ; 
        }
        int get_nam(){
            return nkh.nam ; 
        }
};  


 void TourDuLich::nhap()
 {
    cout << "\nMa tour: " ; 
    getline(cin , matua) ; 
    cout << "Ten tour: " ; 
    getline(cin , tentua) ; 
    cout << "(dd/mm/yy): " ;
    cin >> nkh.ngay >> nkh.thang >> nkh.nam ; 
    cin.ignore() ; 
    cout << "Phuong tien: " ;  
    getline(cin , pt) ; 
    cout << "Gia ca: " ; 
    cin >> gia ; 
    cin.ignore() ; 
 }

 void TourDuLich::xuat(){
    cout << setw(8) << matua 
        <<setw(10) << tentua 
        << setw(3) << nkh.ngay <<"/"
        << setw(2) << nkh.thang <<"/"
        << setw(4) << nkh.nam <<"/"
        << fixed << setprecision(3) 
        << setw(8) << gia <<"vnd" << endl; 
 } 



int main()
{   cout << "Nhap vao so Tour du lich: " ; 
    int n ; cin >> n ; 
    cin.ignore() ; 
    TourDuLich t[n] ; 

    for( int i =0 ; i < n ; i ++)
    {
        t[i].nhap() ; 
    }

    cout << "\nCac tour khoi hanh vao nam 2024: \n" ; 
    for( int i  = 0 ; i < n ; i ++ )
    {
        if(t[i].get_nam() == 2024){
            t[i].xuat() ; 
        }
    }

    double max_gia = t[0].get_gia() ; 
    for( int i = 0 ; i < n ; i ++)
    {
        if( t[i].get_gia()> max_gia )
        {
            max_gia = t[i].get_gia() ; 
        }
    }

    cout << "\nCac tuor co gia lon nhat va su dung phuong tien oto: \n";
    for( int i = 0 ; i < n ; i ++ )
    {
        if( t[i].get_gia() == max_gia && t[i].get_pt() == "oto"){
            t[i].xuat() ; 
        }
    }

    for( int i = 0 ; i < n ; i ++ )
    {
        int min = i ; 
        for( int j = 0 ; j < n ; j ++ )
        {
            if( t[j].get_gia() > t[min].get_gia()){
                min =  j ; 
            }
        }
        if( min != i ){
            swap( t[i] , t[min]) ; 
        }
    }

    cout << "\nThong tin tour du lich voi thu tu tang dan theo gia: \n" ; 
    for( int i = 0 ; i < n ;i ++ )
    {
        t[i].xuat() ; 
    }

    return 0 ; 
}