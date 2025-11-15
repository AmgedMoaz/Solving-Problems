#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int R , S;
  cin >> R >> S;
  
  if (S >= (R*2))
  {
    cout << "Square";
  }
  else if ((R*2) > sqrt(pow(S,2) + pow(S,2)))
  {
    cout << "Circle";
  }
  else 
  {
    cout << "Complex";
  }

    return 0;
}