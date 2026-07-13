  // String Score
#include <bits/stdc++.h>
using namespace std;
 int main() {
  
   int n , score = 0;
    cin >> n;

     string s;
      cin >> s;

       int i = 0;
        while(i < s.size()) {
        
         if(s[i] == 'V') {
            score += 5;
          }else if(s[i] == 'W') {
             score += 2;
           }else if(s[i] == 'X') {
            if(i != s.size()-1)
               s.erase(i+1,1);
            }else if (s[i] == 'Y') {
              if(i != s.size()-1) {
               s.push_back(s[i+1]);
                s.erase(i+1,1);
              }
               }else if(s[i] == 'Z') {
                  if(i != s.size()-1) {
                      if(s[i+1] == 'V') {
                         score /= 5;
                          s.erase(i+1,1);
                       }else if(s[i+1] == 'W') {
                         score /= 2;
                        s  .erase(i+1,1);
                       }
                  }
                } 
                  i++;
        }
          cout << score;

    return 0;
}