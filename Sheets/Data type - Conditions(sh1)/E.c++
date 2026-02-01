#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
cout << fixed << setprecision(9);
double Area , s = 3.141592653,R;
cin >> R;
Area = (R*R)*s;
cout << Area;
return 0;
}