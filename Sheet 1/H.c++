#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int A,B;
cin >> A >> B;
double result = (double)A/B;
cout <<"floor " << A << " / " << B << " = " << floor(result) << "\n";
cout <<"ceil " << A << " / " << B << " = " << ceil(result) << "\n";
cout <<"round " << A << " / " << B << " = " << round(result) << "\n";
return 0;   
}