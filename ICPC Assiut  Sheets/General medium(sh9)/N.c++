#include <iostream>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
int main ()
{
    fast();
   int r , c , times;
    cin >> r >> c >> times;
     int A[r+1][c+1];
      for (int i = 1 ; i <= r ; i++)
      {
         for (int j = 1 ; j <= c ; j++)
         {
            cin >> A[i][j];
         }
      }  
     int Ar[r+1];
     int Ac[c+1];
       for (int i = 1 ; i <= r ; i++)
        {
            Ar[i] = i;
        }
           for (int i = 1 ; i <= c ; i++)
        {
            Ac[i] = i;
        } 
          while(times--)
          {
            char c;
            int num1 , num2;
            cin >> c >> num1 >> num2;
            if (c == 'g'){
            int r = Ar[num1];
            int c = Ac[num2];
              cout << A[r][c] << "\n";
            }
            else if (c == 'r'){
                swap(Ar[num1] , Ar[num2]);
            }

            else if (c == 'c')
            {
                swap(Ac[num1] , Ac[num2]);
            }
          }



    return 0;
}