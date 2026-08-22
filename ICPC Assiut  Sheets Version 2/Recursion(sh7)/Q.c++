// 3n + 1 sequence

#include <iostream>
using namespace std;

// Function to print size of 3n+1 sequence 
int Fun(int n);

int main ()
{

 int n;
 cin >> n;

  cout << Fun(n);

    return 0;
}

// Definition the specific function
int Fun(int n) {
    if(n == 1) return 1;              // base case
    
    else {
        if(n%2 == 0) {
            return 1 + Fun(n/2);
        }else {
            return 1 + Fun(3*n+1);
        }
    }
}