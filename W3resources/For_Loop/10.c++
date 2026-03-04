// Code a program to Sum of the Digits of a Given Number
#include <iostream>
using namespace std;
int main () {
  int number = 0;
  cout << "Input a number : ";
  cin >> number;
    int sum = 0; // Initialize sum to 0
    for(int i = 1 ; number != 0; i++ )
    {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum of the digits is: " << sum << endl;
    return 0;
}