#include <iostream>
using namespace std;
int main ()
{
 int r , c , times;
  cin >> r >> c >> times;
   char A[r][c];

   for (int i = 0 ; i < r ; i++)
   {
     for (int j = 0 ; j < c ; j++)
     {
        A[i][j] = '.';
     }
   }
       while(times--)
        {
          int r1 , c1 , r2 , c2;
          char cv;
           cin >> r1 >> c1 >> r2 >> c2 >> cv;
            for (int i = min(r1,r2)-1 ; i <= max(r1,r2)-1 ; i++)
             {
              for (int j = min(c1,c2)-1 ; j <= max(c1,c2)-1 ; j++)
               {
                 A[i][j] = cv;
               }    
              }  
        }
             for (int i = 0 ; i < r ; i++)
             {
               for (int j = 0 ; j < c ; j++)
                {
                   cout << A[i][j];
                }
                  cout << endl;
             }

    return 0;
}