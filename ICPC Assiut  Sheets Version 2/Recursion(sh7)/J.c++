// Factorial

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the factorial of number
int factorial(int n);

int main ()
{
   
    int n;
    cin >> n;

     cout << factorial(n);
    
    return 0;
}

// Definition the factorial function 
int factorial(int n) {
    if(n == 0) return 1;                     // base case
    else return n*factorial(n-1);            // recursive case
}