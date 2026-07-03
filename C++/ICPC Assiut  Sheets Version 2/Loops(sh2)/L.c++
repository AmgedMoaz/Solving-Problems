 // GCD
#include <bits/stdc++.h>
using namespace std;

int main() {

   int a , b , GCD = 0;
   cin >> a >> b;

    int Min = min(a,b);

     for(int i = 1 ; i <= Min ; i++) {
         
        if(a % i == 0 && b % i == 0) {
            GCD = i;
        }
        
     }
      cout << GCD;


    return 0;
}