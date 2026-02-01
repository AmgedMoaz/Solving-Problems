#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
double X ,P, Price;
cin >> X >> P;
Price = P/(1-(X/100));
cout << fixed << setprecision(2) << Price;

    return 0;
}