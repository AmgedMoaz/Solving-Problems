// Code a program to Find the Last Prime Number Before a Given Number
#include <iostream>
using namespace std;
int main () {
   int number = 0;
   cout << "Input a positive integer: ";
   cin >> number;
   int lastPrime = 0;
   for (int i = number - 1; i >= 2; i--) {
      bool isPrime = true;
      for (int j = 2; j <= i / 2; j++) {
         if (i % j == 0) {
            isPrime = false;
            break;
         }
      }
      if (isPrime) {
         lastPrime = i;
         break;
      }
    }
    if (lastPrime != 0) {
        cout << "The last prime number before " << number << " is: " << lastPrime << endl;

    } else {
        cout << "There are no prime numbers before " << number << endl;
    }
    return 0;
}