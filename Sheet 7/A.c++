#include <iostream>
using namespace std;
void print(int N)
{
    if (N == 0)
    {
        return;
    }
   cout << "I love Recursion\n";
   return print(N - 1);
}
int main ()
{
   int Number;
   cin >> Number;
   print(Number);

   return 0;
}