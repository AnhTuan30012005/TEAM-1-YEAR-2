#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i = 0 ; i < 3; i ++)
    {
        cout << "Nhap vao so thu "<< i+1 <<" : ";
        cin >> a[i];
    }

   for( int i = 0 ; i < 3; i++)
   {
        int max_index = i;
        for( int j = i+1 ; j < 3; j++)
        {
            if( a[j] > a[i] ){
                max_index = j;
            }
        }

        if( max_index != i){
            int temp = a[i];
            a[i] = a[max_index];
            a[max_index] = temp;
        }
   }


    cout << "Day la giam gian: ";
    for(int x : a)
        cout << x << " ";
    cout << "\n" << "Day la tang gian: ";
    cout << a[3] << " " << a[2] << " " << a[1];
    return 0;
}