#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
  int A , B , C;
  cin >> A >> B >> C;
  if ( A + B <= C || A + C <= B || C + B <=  A)
  {
    cout << "Invalid";
    return 0;
  }
  else 
  {
    cout << "Valid" << endl;
    int Sum = A + B + C;
    double Area = sqrt((Sum/2)*(Sum/2 - A)*(Sum/2 - B)*(Sum/2 - C));
    cout << fixed << setprecision(6) << Area;
  }


    return 0;
}