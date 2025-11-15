#include <iostream>
using namespace std;
int main ()
{
   int row , col;
   cin >> row >> col;
   int A[row]= {0} , B[col] = {0};
   for (int i = 0 ; i < row ; i++)
   {
    string line;
    cin >> line;
    for(int j = 0 ; j < col ; j++)
    {
        if (line[j] == 'S')
        {
            A[i] = 1;
            B[j] = 1;
        }
    }
   }
   int ca = 0;
   for(int i = 0 ; i < row ; i++)
   {
     for (int j = 0 ; j < col ; j++)
     {
        if (A[i]==0 || B[j] ==0) 
        {
            ca++;
        }
     }
   }
     cout << ca << "\n";

   return 0;
}