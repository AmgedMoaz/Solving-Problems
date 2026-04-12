#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int arr[5][5];
    int counter =0;
     for(int i = 0 ; i < 5 ; i++)
      {
         for(int j = 0 ; j < 5 ; j++)
         {
           cin >> arr[i][j];
         }
     }   
        for(int i = 0 ; i < 5 ; i++)
        {
            for(int j = 0 ; j < 5 ; j++)
            {
            if(arr[i][j] == 1)
            {
                counter = abs(2-i) + abs(2-j);
                break;
            }
            }
        }
           cout << counter << "\n";
      return 0;
}