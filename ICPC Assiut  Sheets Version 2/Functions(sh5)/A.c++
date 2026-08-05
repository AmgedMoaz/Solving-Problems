 // Add
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of two integers
int add(int x , int y);

int main() {

 int n1 , n2;
 cin >> n1 >> n2; 

  cout << add(n1,n2);
  
    return 0;
}

// Definition of the add function
int add(int x , int y) {
    return (x + y);
}