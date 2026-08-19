// Base Converssion

#include <bits/stdc++.h>
using namespace std;

// Function to print the binary converssion
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
void print(int N)
{
   if(N == 0)
   {
      return;            // base case
   }
   print(N/2);           // recursive case
   cout << (N%2);
}