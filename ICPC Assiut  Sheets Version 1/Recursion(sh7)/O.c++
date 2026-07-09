#include <iostream>
using namespace std;
int Fibonacci(int Number)
{
  if (Number == 1)
   return 0;
  else if (Number == 2)
   return 1;
   else
   return Fibonacci(Number - 1) + Fibonacci(Number - 2);
}
int main ()
{
  int N;
  cin >> N;
  cout << Fibonacci(N);
 
    return 0;
}