#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
double A , B , C , D;
cin >> A >> B >> C >> D;
double Left = B*log(A);
double Right = D*log(C);

if(Left > Right)
{
   cout << "YES";
}
else
{
  cout << "NO";
}

return 0;
}