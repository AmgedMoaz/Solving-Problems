#include <iostream>
#include <iomanip>
using namespace std;
int A[100];
int N;
double getAverage(int Number,double res)
{
  if (Number == N)
  {
    return res/N;
  }
    return getAverage(Number+1,res+A[Number]);
}
int main ()
{
  cin >> N;
  for (int i = 0 ; i < N ; i++)
  {
    cin >> A[i];
  }
   cout << fixed << setprecision(6) << getAverage(0,0);
 
    return 0;
}