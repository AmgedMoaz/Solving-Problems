  // Max Split
#include <bits/stdc++.h>
using namespace std;
 int main() {
  
  string s;
   cin >> s;
    
     string arr[505];
      string cur = "";
       int cl = 0, cr = 0 , p = 0;

        for(int i = 0 ; i < s.size() ; i++) {

            cur += s[i];
             if(s[i] == 'L') {
               cl++;
              }else {
                 cr++;
             }
             
               if(cl == cr) {
                 arr[p] = cur;
                  p++;
                   cr = 0 , cl = 0;
                    cur = "";
               }

        }

         cout << p << "\n";
          for(int i = 0 ; i < p ; i++) {
             cout << arr[i] << endl;
          }

    return 0;
}