  // String Score
#include <bits/stdc++.h>
using namespace std;
 int main() {
  
   int n , score = 0;
    cin >> n;

     string s;
      cin >> s;

       int i = 0;
        while(i < n) {
        
         if(s[i] == 'V') {
            score += 5;
          }else if(s[i] == 'W') {
             score += 2;
           }else if(s[i] == 'X') {
            if(i != n-1)
               i++;
            }else if (s[i] == 'Y') {
              if(i != n-1) {
               s.push_back(s[i+1]);
                i++;  n++;
              }
               }else if(s[i] == 'Z') {
                  if(i != n-1) {
                      if(s[i+1] == 'V') {
                         score /= 5;
                          i++;
                       }else if(s[i+1] == 'W') {
                         score /= 2;
                          i++;
                       }
                  }
                } 
                  i++;
        }
          cout << score;

    return 0;
}