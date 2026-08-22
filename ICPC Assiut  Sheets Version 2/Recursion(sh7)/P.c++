// Log2

#include <iostream>
using namespace std;

// Function to print the Log2(n)
int getLog(long long n);

int main ()
{

  long long n;
  cin >> n;
  
   cout << getLog(n);

    return 0;
}

// Definition the log function
int getLog(long long n) {
    if(n/2 ==  0) return 0;               // base case

    else  return 1 + getLog(n/2);         // recursive case
}