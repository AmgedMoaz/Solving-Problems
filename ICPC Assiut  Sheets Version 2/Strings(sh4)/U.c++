  // New Words
#include <bits/stdc++.h>
using namespace std;
 int main ()
{

  string s;
   cin >> s;

    int e = 0 , g = 0 , y = 0 , p = 0 , t = 0;
     int i = 0;
      while(i < s.length()) {

       if(s[i] == 'e' || s[i] == 'E') {
         e++;
        }else if(s[i] == 'g' || s[i] == 'G') {
           g++;
         }else if(s[i] == 'y' || s[i] == 'Y') {
            y++;
          }else if(s[i] == 'p' || s[i] == 'P') {
             p++;
           }else if(s[i] == 't' || s[i] == 'T') {
               t++;
            }
              i++;
      }

        cout << min({e,g,y,p,t});

    return 0;
}