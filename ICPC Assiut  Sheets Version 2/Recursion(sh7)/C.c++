// Print from N to 1

#include <bits/stdc++.h>
using namespace std;

// Function to print numbers from n to 1
void print(int n);

int main() {

 int n;
 cin >> n;

  print(n);
    
    return 0;
}

// Definition the print function
void print(int n) {
    if(n == 0)
      return;                     // base case
    else {
        cout << n;
        if(n != 1) {
            cout << " ";
        }
        print(n-1);               // recursive case
    }
}