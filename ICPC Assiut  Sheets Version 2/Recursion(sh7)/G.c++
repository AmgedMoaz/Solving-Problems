// Pyramid

#include <bits/stdc++.h>
using namespace std;

int N;

// Function to print the shape pyramid
void print(int n);

int main ()
{
  
    cin >> N;
    print(N);
    
    return 0;
}

// Definition the print function
void print(int row)
{ 
  if(row == 0) return;                                 // base case

  print(row-1);                                        // recursive case
  for(int i = 1 ; i <= N - row ; i++) cout << " ";
  for(int i = 1 ; i <= 2*row-1 ; i++) cout << "*";
  cout << "\n";
}