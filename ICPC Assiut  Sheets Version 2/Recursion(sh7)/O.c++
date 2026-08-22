// Fibonacci

#include <iostream>
using namespace std;

// Function to print the Fibonacci sequence
int Fib(int n);

int main ()
{

    int n;
    cin >> n;

     cout << Fib(n);  

    return 0;
}

// Definition the Fibonecci function 
int Fib(int n) {
    if(n <= 2) return n-1;                    // base case

    else return Fib(n-1) + Fib(n-2);
}