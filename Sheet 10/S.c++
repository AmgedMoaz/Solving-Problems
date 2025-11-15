#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int row , column;
    cin >> row >> column;
    char A[row][column];
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < column ;j++)
        {
            cin >> A[i][j];
        }
    }
      for (int i = 0 ; i < row ; i++)
      {
        for (int j = 0 ; j < column ;j++)
        {
            if (A[i][j] == '.')
            {
                if ((i+j) % 2 == 0)
                {
                    A[i][j] = 'W';
                }
                else
                {
                    A[i][j] = 'B';
                }
            }
        }
      }
             for (int i = 0 ; i < row ; i++)
            {
              for (int j = 0 ; j < column ;j++)
                {
                  cout << A[i][j];
                }
                cout << endl;
            }     


    
    return 0;
}