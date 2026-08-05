 // Print
#include <bits/stdc++.h>
using namespace std;

// Function to print a message
void print() ;

int main() {

 print();

    return 0;
}

// Definition of the print function
void print() {
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        cout << i;
        // Ternary operator to decide whether to print a space or a newline
        (i == n) ? cout << endl : cout << " "; 
    }
}