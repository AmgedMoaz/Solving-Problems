// Print Digits using Recursion

#include <bits/stdc++.h>
using namespace std;

// Function to print digits
void print(int n);

int main() {

 int t;
 cin >> t;

   while(t--) {
     int n;
     cin >> n;
     
        print(n);
        cout << endl;
   }
    
    return 0;
}

// Definition the print function
void print(int N) {
    if (N < 10) {
        cout << N << " ";
        return;                          // base case
    }
    print(N / 10);                       // recursive case
    cout << N % 10 << " ";
}