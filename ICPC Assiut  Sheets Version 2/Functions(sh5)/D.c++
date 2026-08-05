 // Prime Function
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n);

int main() {

    int t;
    cin >> t; // Read the number of test cases

     while(t--) {
         int n;
            cin >> n; // Read the number to check
            if(isPrime(n)) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
     }
}

// Definition of the isPrime function
bool isPrime(int n) {
    if(n <= 1) return false; // Numbers less than or equal to 1 are not prime
    for(int i = 2; i * i <= n; i++) { // Check for factors from 2 to sqrt(n)
        if(n % i == 0) {
            return false; // If n is divisible by i, it is not prime
        }
    }
    return true; // If no factors were found, n is prime
}