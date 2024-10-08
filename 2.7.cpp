#include <bits/stdc++.h>
using namespace std;

// hàm tìm số lớn nhất và số bé nhất
void lon_be( int a[])
 {   
// tìm ra số xuất hiện nhiều nhất và tần suất xuất hiện của nó
    int nhieu = 0;
    int lan = 0;

    for( int i = 0 ; i < 10; i++ )
    {   
        int dem = 0;
        int vi_tri = a[i];
        for(int j = 0; j < 10; j++ )
        {
            if( a[i] == a[j])
            {
                dem++; 
            }
        }    
        
        if(dem >= lan){
            lan = dem; 
            nhieu = vi_tri;
        }
        
    } 
        cout << "- So xuat hien nhieu nhat: " << nhieu << endl;
        cout << "- Voi tan xuat la: " << lan << endl;

// tìm lớn nhất và bé nhất 
    for(int i = 0 ; i < 9; i++ )
    {
        int max = i;
        for( int j  = i+1 ; j < 10; j++ )
            {
                if( a[i] < a[j] ){
                    max = j;
                }
            }
        if( max != i){1  
            int temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }    
    }

    cout << "- So lon nhat la: " << a[0] << endl;
    cout << "- So be nhat la: " << a[9] << endl;
    
}

    int main()
{

    int a[10];
    for(int i = 0 ; i  < 10; i++ ){
        cin >> a[i];
    }

    lon_be(a);

    return 0;
}