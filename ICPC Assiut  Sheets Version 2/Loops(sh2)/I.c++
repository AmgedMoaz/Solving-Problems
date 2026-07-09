// Palindrome
#include <bits/stdc++.h>
using namespace std;
int main() {

   int n;
   cin >> n;

    int reverse = 0 , temp = n;

     while(temp > 0) {

       reverse = reverse * 10 + (temp % 10);
       temp /= 10;

     }
     
      cout << reverse << "\n";
      
      if(reverse == n) {
         cout << "YES" << endl;
      }else
         cout << "NO" << endl;

    return 0;
}