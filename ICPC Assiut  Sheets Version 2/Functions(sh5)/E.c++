 // Swap
#include <bits/stdc++.h>
using namespace std;

// Function to swap two integers
void swap_numbers(int x , int y);
int main() {

 int a , b;
 cin >> a >> b;

  swap_numbers(a , b);

    return 0;
}

// Definition of the swap function
void swap_numbers(int n1 , int n2) {
  int temp;
    temp = n1;
     n1 = n2;
      n2 = temp;

       cout << n1 << " " << n2 << endl;
}