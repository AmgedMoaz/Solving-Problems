#include <iostream>
using namespace std;
void print(int N , char C)
{
for (int i = 1 ; i <= N ;i++)
{
   cout << C;
   if (i == N)
   {
    break;
   }
   cout << " ";
}
}
int main ()
{
    int T;
    cin >> T;
    while(T--)
    {
    int Number;
    char Letter;
    cin >> Number >> Letter;
    print(Number,Letter);
    
         cout << "\n";
    }

   return 0;
}