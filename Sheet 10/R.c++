#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int N , a , b , c;
    cin >> N >> a >> b >> c;
     int result = 0;
     for (int i = 0 ; i <= N ;i++)
     {
        for(int j = 0 ; j <= N ;j++)
        {
            int k = (N - (a*i) - (b*j))/c;
            if ( k < 0 ) k = 0;
            if ( (a*i) + (b*j) + (c*k) == N)
            {
                result = max(result,i+j+k);
            }
        }
     }
       cout << result << "\n";
  
    return 0;
}