// Factorial
#include <bits/stdc++.h>
using namespace std;
int main() {

 int t , n;
 long long result = 1;
 cin >> t;

   for(int i = 1 ; i <= t ; i++) {
       result = 1;
       cin >> n;
         for(int j = 1 ; j <= n ; j++) {
             result *= j;  
            }
           cout << result << "\n";
     }

    return 0;
}