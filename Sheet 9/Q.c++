#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N , M , Min;
     cin >> N >> M;
         if (N % 2 == 0)
          {
             Min = N/2;
          }
          else 
          {
             Min = (N/2)+1;
          }

           for (int i = Min ; i <= N ;i++)
           {
             if (i % M == 0)
              { 
                cout << i;
                return 0;
              }
           }
            cout << -1;

    return 0;
}