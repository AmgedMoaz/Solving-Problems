#include <iostream>
#include <iomanip>
using namespace std;
long long fac(long long num1 , long long num2)
{
    long long res = 1;
    long long temp = 2;
    for (int i = num2+1; i <= num1 ; i++)
    {
        res*=i;
        if ( (temp <= num1 - num2) && (res % temp == 0) )
        {
            res/=temp;
            temp++;
        }
    }
    return res;
}

int main ()
{
  long long N , M;
  cin >> N >> M;
  if (M > N)  
  {
    cout << 0 << "\n";
  }
  else 
  {
    cout << fac(N,M) << endl;
  }
 
    return 0;
}