#include <bits/stdc++.h>
using namespace std;
int main ()
{
  long long  Size , num , cover = 0;
    cin >> Size >> num;
     for (int i = 0 ;i < Size ;i++)
      {
        long long X , Y;
         cin >> X >> Y;
          cover += (Y-X+1);
      }    
       cover%=num;
        if (cover == 0)
         {
            cout << 0;
         }
          else{
           cout << (num-cover);
          }


    return 0;
}