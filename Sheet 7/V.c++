#include <iostream>
using namespace std;
int N , X;
int A[20];
bool getExpression(int sum , int index)
{
  if (index == N) return sum == X;
  
  bool sum1 = getExpression(sum + A[index] , index+1);
  bool sum2 = getExpression(sum - A[index] , index+1);
  return sum1 || sum2;
}
int main ()
{
   cin >> N >> X;
   for (int i = 0 ; i < N ; i++)
   {
     cin >> A[i];
   }
   if (getExpression(A[0] , 1)) cout << "YES";
   else
   cout << "NO";
   
    return 0;
}