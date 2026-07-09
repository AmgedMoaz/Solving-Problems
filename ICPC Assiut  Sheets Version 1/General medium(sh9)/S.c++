#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int Size;
    cin >> Size;
      int A[Size];
       for (int i = 0 ; i < Size ; i++)
        {
            cin >> A[i];
        }
         sort(A,A+Size);
         string res = "NO";
          for (int i = Size-1 ; i >= 2 ;i--)
          {
              if( (A[i] + A[i-1] > A[i-2]) && (A[i-1] + A[i-2] > A[i] ) && (A[i] + A[i-2] > A[i-1]) )
              {
                res = "YES";
                break;
              }
          } 
           cout << res;

    return 0;
}