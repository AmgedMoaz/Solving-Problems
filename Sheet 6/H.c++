#include <iostream>
using namespace std;
long long GCD(long long A , long long B) 
{
  long long temp = 0;
  while (B !=0 )
  {
    temp = A;
    A = B;
    B = temp % A;
  }
   return A;
}
long long LCM(long long A , long long B)
{
  return (A / GCD(A,B)) * B;
}
int main ()
{
   long long A , B;
   cin >> A >> B;

   cout << GCD(A,B) << " " << LCM(A,B) << endl;

    return 0;
}