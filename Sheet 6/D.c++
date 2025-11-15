#include <iostream>
using namespace std;
int main ()
{
   long long A , B , Q;
   cin >> A >> B >> Q;
   
   long long Result = Q % 3;
   
   if (Result == 1)
   {
    cout << A;
   }
   else if (Result == 2)
   {
    cout << B;
   }
   else 
   {
    cout << (A^B);
   }

    return 0;
}