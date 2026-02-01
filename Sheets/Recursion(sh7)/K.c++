#include <iostream>
#include <algorithm>
using namespace std;
int N;
int A[1000];
int Max(int Number)
{
  if (Number == N-1)
  return A[Number];

  return max(A[Number],Max(Number+1));
}
int main ()
{
   cin >> N;
   for(int i = 0 ; i < N ; i++) cin >> A[i];
   cout << Max(0);
    return 0;
}