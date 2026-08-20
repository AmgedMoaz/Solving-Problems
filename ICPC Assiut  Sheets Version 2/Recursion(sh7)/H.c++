// Inverted Pyramid

#include <bits/stdc++.h>
using namespace std;

int n;

// Function to print the inverted pyramid
void print(int n);

int main ()
{
   
    cin >> n;

     print(n);
    
    return 0;
}

// Definition the print function
void print(int row) {
    if(row == 0) return;                                 // base case

    for(int i = 1 ; i <= n - row ; i++)   cout << " ";
    for(int i = 1 ; i <= 2*row - 1 ; i++) cout << "*";
    cout << "\n";
    print(row-1);                                         // recursive case
}