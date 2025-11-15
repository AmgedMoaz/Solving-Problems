#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
   int X1 , X2 , Y1 , Y2;
   cin >> X1 >> Y1 >> X2 >> Y2;

   double D1 = X1 - X2;
   double D2 = Y1 - Y2;
   double Result = sqrt((D1*D1) + (D2*D2));
   cout << fixed << setprecision(9) << Result;

    return 0;
}