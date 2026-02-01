#include <iostream>
using namespace std;
int num1 , num2;
int ways(int Number)
{
  if (Number >= num2) return Number == num2;

  return ways(Number+1) + ways(Number+2) + ways(Number + 3);
}
int main ()
{
  cin >> num1 >> num2;
  cout << ways(num1);

    return 0;
}