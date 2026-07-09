// Code a program to Find the Greatest Common Divisor (GCD) of Two Numbers
#include <iostream>
using namespace std;
int main () {
    int num1, num2;
    cout << "Enter a number 1 : ";
    cin >> num1 ;
    cout << "Enter a number 2 : ";
    cin >> num2;
    int gcd = 1; // Initialize GCD to 1
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // Update GCD if both numbers are divisible by i
        }
    }
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    return 0;
}