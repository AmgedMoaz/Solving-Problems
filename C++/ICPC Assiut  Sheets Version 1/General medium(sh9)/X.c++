#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int Size,num;
   cin >> Size >> num;
    int pointes = (Size * 2) + 1;
     int A[pointes];
      for (int i = 0 ;i < pointes ; i++)
       {
         cin >> A[i];
       }
        for (int i = 1 ; i < pointes-1; i++)
         {
            if ( A[i] > A[i-1] + 1 && A[i] > A[i+1] + 1)
            {
              A[i]--;
              num--;
            }
            if (num == 0)
            {
                break;
            }
         }
             for (int i = 0 ;i < pointes ; i++)
             {
               cout << A[i] << " ";
             }

    return 0;
}