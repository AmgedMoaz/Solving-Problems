#include <iostream>
#include <cmath>
using namespace std;
long long Equation(int n1 , int n2)
{


long long  Final = 0;
for (int i = 2 ; i <= n2 ; i+=2)
{
    
   Final += pow(n1,i);
   
}
return Final;
}
int main ()
{
   int X , N ;
   cin >> X >> N; 
  cout <<  Equation(X,N) << endl;

    return 0;
}