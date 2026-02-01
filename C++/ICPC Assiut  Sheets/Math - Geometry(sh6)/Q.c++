#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
  int L , R , M;
  cin >> L >> R >> M;

  long long Result = 1;
  int Max = max(L,R);
  int Min = min(L,R);
  for (int i = Min ; i <= Max ; i++)
  {
   Result *= i;
   Result %= M;
  }
    cout << Result;

    return 0;
}