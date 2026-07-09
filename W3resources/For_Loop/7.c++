// Code a program to get factorial of a number using for loop.
#include <iostream>
using namespace std;
int main () {
 int n1 = 0 , result = 1;
 cout << "Input a positive integer: ";
 cin >> n1;
  for (int i = n1; i > 1; i--)
  {
    result *= i;
  }
  cout << "The factorial of " << n1 << " is: " << result << endl;
    return 0;
}