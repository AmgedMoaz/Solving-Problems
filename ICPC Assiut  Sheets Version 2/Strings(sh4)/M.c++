  // Subsequence String
#include <bits/stdc++.h>
using namespace std;
 int main() {

   string s;
    cin >> s;
     
     int i = 0 , counter = 0;
      while(i < s.length()) {
         
         if(s[i] == 'h') {
            if(counter == 0) {
               counter++;
            }
          }else if(s[i] == 'e') {
            if(counter == 1) {
              counter++;
            }
          }else if(s[i] == 'l') {
             if(counter == 2 || counter == 3) {
               counter++;
             }
           }else if(s[i] == 'o') {
              if(counter == 4) {
                counter++;
              }
            }
                  i++;

         }
          (counter == 5) ? cout << "YES" : cout << "NO";

    return 0;
 }