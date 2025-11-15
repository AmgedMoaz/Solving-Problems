#include <iostream>
using namespace std;
void printBinary(int N)
{
   if(N == 0)
   {
      return;
   }
   printBinary(N/2);
   cout << (N%2);
}
int main ()
{
   int T;
   cin >> T;
   while (T--)
   {
    int Number;
    cin >> Number;
    printBinary(Number);
    cout << "\n";
   }

    return 0;
}