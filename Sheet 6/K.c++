#include <iostream>
using namespace std;
long long fact(int A)
{
   long long  counter = 1;
   long long  Result = 1;
   while (counter <= A)
   {
    Result *= counter;
    counter++;
   }
   return Result;
}
int main ()
{
   int A , B;
   cin >> A >> B;

   cout << fact(A)/(fact(A-B)*fact(B)) << " ";
   cout << fact(A)/fact(A-B);

    return 0;
}