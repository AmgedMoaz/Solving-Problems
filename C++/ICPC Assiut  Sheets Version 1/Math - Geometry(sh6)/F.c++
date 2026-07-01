#include <iostream>
using namespace std;
int main ()
{
   int Ra , Ca;
   cin >> Ra >> Ca;
   int Array1[Ra][Ca];
   for (int i = 0 ; i < Ra ; i++)
   {  
       for (int j = 0 ; j < Ca ; j++)
       {
           cin >> Array1[i][j];
        }
    }

    int Rb , Cb;
    cin >> Rb >> Cb;
      int Array2[Rb][Cb];
   for (int i = 0 ; i < Rb ; i++)
   {  
     for (int j = 0 ; j < Cb ; j++)
     {
        cin >> Array2[i][j];
     }
   }

      int Result[Ra][Cb];
       for (int i = 0 ; i < Ra ; i++)
       {
       for (int j = 0 ; j < Cb ; j++)
       {
         Result[i][j] = {0};
       }
       }
   
  for (int i = 0 ; i < Ra ; i++)
   {  
     for (int j = 0 ; j < Cb ; j++)
     {
        for (int k = 0 ; k < Ca ; k++)
        {
         Result[i][j] += Array1[i][k] * Array2[k][j] ;
        }
     }
   }

   for (int i = 0 ; i < Ra ; i++)
   {
       for (int j = 0 ; j < Cb ; j++)
       {
         cout <<  Result[i][j] << " ";
       }
       cout << "\n";
   }
    return 0;
}