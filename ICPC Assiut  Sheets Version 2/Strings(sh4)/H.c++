  // Good or Bad
#include <bits/stdc++.h>
using namespace std;
 int main() {
 
  int t;
   cin >> t;

   string s;
    while(t--) {

      cin >> s;
        if(s.find("010") == string::npos
           && s.find("101") == string::npos) {
             cout << "Bad" << endl;
         }else {
              cout << "Good" << "\n";  
          }
          
    }

     return 0;
  }