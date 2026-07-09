// Code a program to find and display all perfect numbers between 1 and 500.
#include <iostream>
using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    int sum = 0;
    
    // Find divisors of num and sum them up
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // If the sum of divisors equals the number, it's a perfect number
    return sum == num;
}

int main() {
    cout << "Perfect numbers between 1 and 500: " << endl;
    
    // Loop through numbers from 1 to 500
    for (int num = 1; num <= 500; num++) {
        if (isPerfectNumber(num)) {
            cout << num << "\n";
        }
    }
    return 0;
}