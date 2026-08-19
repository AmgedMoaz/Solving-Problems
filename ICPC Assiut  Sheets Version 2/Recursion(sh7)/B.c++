// Print from 1 to N

#include <bits/stdc++.h>
using namespace std;

int x = 1;

// Function to print numbers from 1 to n
void print(int n);

int main() {

  int n;
  cin >> n;

   print(n);
    
    return 0;
}

// Definition the print function
void print(int n) {
    if(x > n) {
        return;                 // base case
    }else {
        cout << x++ << endl;
        print(n);               // recursive case
    }
}