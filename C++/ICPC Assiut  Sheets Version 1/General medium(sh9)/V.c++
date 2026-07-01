#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int Size;
   cin >> Size;
    int A[Size];
    bool b = 0;
     for(int i = 0 ; i < Size ; i++)
      {
        cin >> A[i];
      }
       for (int i = 0 ; i < Size ; i++)
        {
            double r1 = (double)(A[i]/2.0);
             if (A[i] % 2 == 0)
             {
                A[i] = A[i]/2;
             }
              else{
                if (b == 0) 
                {
                    A[i] = ceil(r1);
                    b = 1;
                }
                 else{
                     A[i] = floor(r1);
                     b = 0;
                 }
              }
        }
         for (int i = 0 ; i < Size ; i++)
         {
            cout << A[i] << endl;
         }

    return 0;
}