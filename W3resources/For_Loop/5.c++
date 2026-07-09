// C++ program to check if the given number is prime or not
#include <iostream>
using namespace std;
 bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main () {
  int number = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (isprime(number)) {
        cout << " The entered number is a prime number" << endl;
    } else {
        cout << number << " The entered number is not a prime number." << endl;
    }
    return 0;
}