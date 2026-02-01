#include <iostream>
using namespace std;
long long Factorial(long long N)
{
    if (N == 0 || N == 1) return 1;
    return N*Factorial(N-1);
}
int main ()
{
   long long Number;
   cin >> Number;

   cout << Factorial(Number);

    return 0;
}