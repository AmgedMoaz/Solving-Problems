#include <iostream>
using namespace std;
long long  B[10000001] = {0};
int main()
{
     long long Size;
      cin >> Size;
       long long A[Size]; 
        for(int i = 0 ; i < Size ; i++)
         {
            cin >> A[i];
            B[A[i]]++;
         }
         long long res = 0;
          for (int i = 0 ; i < 10000001 ; i++)
           {
            if (B[i] > 1)
             {
                res += B[i] -1;
             }
           }
            if (res == 0)
             {
                cout << -1 << "\n";
             }
              else
               cout << res << endl;

    return 0;
}