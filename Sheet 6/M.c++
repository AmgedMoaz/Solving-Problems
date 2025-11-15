#include <iostream>
using namespace std;
int main ()
{
   string num1;
   long long num2;
   cin >> num1 >> num2;
   long long Result = 0;
   for (int i = 0 ; i < num1.size() ;i++)
   {
   Result *= 10;
   Result += num1[i] - '0';
   Result %= num2;
   }

   if ( Result == 0) cout << "YES";
   else cout << "NO";

    return 0;
}