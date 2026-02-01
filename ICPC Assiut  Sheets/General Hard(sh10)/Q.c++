#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int Size , Mo = 0;
   cin >> Size;
  int A[Size];
  for (int i  = 0 ; i < Size ; i++)
  {
    cin >> A[i];
  }

     for (int i  = 1 , l = 0; i <= Size ; i++)
     {
      l = max(l,A[i]);
      if (l == (i+1))
      {
        Mo++;
      }
     }
       cout << Mo;
  
    return 0;
}