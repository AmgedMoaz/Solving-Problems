#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
   double X1 , X2 , Y1 , Y2;
   cin >> X1 >> Y1 >> X2 >> Y2;

   double X3 , X4 , Y3 , Y4;
   cin >> X3 >> Y3 >> X4 >> Y4;
   
   double midX1 = (X1+X2)/2.0;
   double midY1 = (Y1+Y2)/2.0;
   double midX2 = (X3+X4)/2.0;
   double midY2 = (Y3+Y4)/2.0;
   double r1 = sqrt(pow(X1-X2,2) + pow(Y1-Y2,2))/2.0;
   double r2 = sqrt(pow(X3-X4,2) + pow(Y3-Y4,2))/2.0;
   double line = sqrt(pow(midX1-midX2,2) + pow(midY1-midY2,2));
   double rr = r1 + r2;
   
   if (line > rr)
   {
    cout << "NO";
   }
   else
   {
    cout << "YES";
   }

    return 0;
}