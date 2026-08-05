 // Equation
#include <bits/stdc++.h>
using namespace std;

// Equation function prototype
long long equation(int a , int b); 


int main() {

 int x , n;
 cin >> x >> n;

  long long result = equation(x , n);
   cout << result << endl;

    return 0;
}

// Definition of the equation function
long long equation(int a , int b) {
   long long res = 1 , sum = 0;
    int index = 2;
     while (index <= b) {
       for(int i = index ; i >= 1 ; i--) {
         res = res * a;
       }
        sum += res;
         res = 1;
         index+=2;
     }
   return sum;
}