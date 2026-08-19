// Print Recursion

#include <bits/stdc++.h>
using namespace std;

// Function to print the specific statement
void print(int n);

int main() {

    int n;
    cin >> n;

    print(n);
    
    return 0;
}

// Definition the print function
void print(int n) {
    if( n == 0)
      return;                           // base case
    else {
        cout << "I love Recursion\n";   
        print(n-1);                     // recursive case
    } 
}