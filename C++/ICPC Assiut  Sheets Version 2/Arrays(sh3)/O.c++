 // Fibonacci
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
    cin >> n;

     if(n == 1) {
       cout << 0;
        return 0;
     }else if (n == 2) {
         cout << 1;
          return 0;
     }

       long long a = 0 , b = 1 , c;
        for(int i = 3 ; i <= n ; i++) {

          c = a+b;
           a = b;
            b = c;

        }
         cout << b << endl;

    return 0;
}