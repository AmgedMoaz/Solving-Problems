 // Convert To Decimal 2
#include <bits/stdc++.h>
using namespace std;

int main() {

   int t , n , x = 0 , convert = 0;
   cin >> t;

    while(t--) {
       
      cin >> n;
       while(n != 0) {
          x += (n%2);
           n /= 2;
       }
         
         for(int i = 0 ; i < x ; i++) {
           convert += (pow(2,i));
         }
           cout << convert << endl;
             x = 0 , convert = 0;

    }
    
    return 0;
}