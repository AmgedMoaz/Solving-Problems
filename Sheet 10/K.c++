#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int Size;
    cin >> Size;
   int frq[Size+1] = {0};
   int Max = Size;
    for (int i = 0 ; i < Size ;i++)
    {
        int Num;
         cin >> Num;
        frq[Num] = 1;
         while(frq[Max] == 1)
         {
            cout << Max << " ";
            Max--;
         }
         cout << "\n";
    }


    return 0;
}