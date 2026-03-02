// Code a program to find the sum of first 10 natural numbers.
#include<iostream>
using namespace std;
int main () {
  int Sum = 0;
    for (int i = 1; i <= 10; i++) {
        Sum += i;
    }
    cout << "The sum of first 10 natural numbers: " << Sum << endl;
    return 0;
}