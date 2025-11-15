#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long N)
{
    if (N <= 1)
    {
        return 0;
    }
    for (int i = 2 ; i <= sqrt(N) ;i++)
    {
        if (N % i == 0)
        return false;
    }
    return true;
}
int main ()
{
  int Size , X , op , result = 0;
   cin >> Size >> X;
  int A[Size];
  for(int i = 0 ; i < Size ; i++)
  {
    cin >> A[i];
  }
    for(int i = 0 ; i < Size ; i++)
    {
      cin >> op;
      if (op == 1)
      {
        if (isPrime(A[i]) == 1)
        {
          if (A[i] % 2 == 0)
          {
            cout << 0 << " ";

          }
          else 
          {
            cout << 5 << " ";
          }
        }
        else
        {
            cout << -1 << " ";
        }
      }
      else if (op == 2)
      {
        cout << 0 << " ";
      }
    }

    return 0;
}