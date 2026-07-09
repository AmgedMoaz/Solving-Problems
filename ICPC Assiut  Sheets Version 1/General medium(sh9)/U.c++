#include <bits/stdc++.h>
using namespace std;
long long A[1000001] = {0};
int main ()
{
     A[1] = 1;
      for (long long i = 2 ; i <= 1000 ; i++)
       {
         for (long long j = 2*i ; j <= 1000000 ; j+=i)
          {
            A[j] = 1;
          }
       }
         int Size;
          cin >> Size;
           while(Size--)
           {
             long long num; 
              cin >> num;
               long long sq = sqrt(num);
                if (sq * sq == num && A[sq] == 0)
                 {
                    cout << "YES\n";
                 }else
                 {
                    cout << "NO\n";
                 }
           }

    return 0;
}