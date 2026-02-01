#include <bits/stdc++.h>
using namespace std;
int main() 
{
 int Size , Div;
  cin >> Size >> Div;
   string result = "";
    if ( Size < 2 && Div == 10)
    {
      cout << -1;
      return 0;
    }
    else if (Size >= 2 && Div == 10)
    {
        for (int i = 0 ; i < Size - 1 ; i++)
         {
           result += 1 + '0';
         }
         result += 0 +'0';
         cout << result << endl;
    }
    else
    {
         for (int i = 0 ; i < Size ; i++)
         {
           result += Div + '0';
         }
           cout << result << endl;
    }

    return 0;
}