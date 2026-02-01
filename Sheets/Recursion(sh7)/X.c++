#include <iostream>
#include <algorithm>
using namespace std;
int rows , coloums;
int A[11][11];
int maxPath(int start , int end)
{
    if (start == rows -1 && end == coloums -1) return A[start][end];
    else if (start == rows + 1 || end == coloums + 1)
    {
       return -1000000;
    }
   int right = maxPath(start , end+1);
   int down = maxPath(start+1 , end);
    return A[start][end] + max(right,down);

}
int main ()
{
   cin >> rows >> coloums;
   for (int i = 0 ; i < rows ;i++)
    {
      for (int j = 0 ; j < coloums ; j++)
      {
        cin >> A[i][j];
      }
    }
    cout << maxPath(0,0);

    return 0;
}