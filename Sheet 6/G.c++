#include <iostream>
using namespace std;
int main ()
{
  long long N;
  cin >> N;

  long long Sum = 0;
  for (long long i = 1 ; i * i <= N ; i++)
  {
     if (N % i == 0)
     {
        Sum += i;
     
        if (i != N / i)
        {         // القاسم الثاني المختلف
         Sum += N / i;
        }
     }
  }
   cout << Sum;

    return 0;
}