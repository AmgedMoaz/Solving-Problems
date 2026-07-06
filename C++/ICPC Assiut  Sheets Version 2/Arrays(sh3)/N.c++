 // Check Code
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a , b; 
  string s;
  bool check;
  cin >> a >> b;
  cin >> s;
   
  if(s[a] == '-') {
    check = true;
    }else if(s[a] != '-') {
       check = false;
        cout << "No";
         return 0;
     }

      for(int i = 0 ; i < s.size() ; i++) {

        if(i == a) {
          continue;
        }
    
         if(isdigit(s[i])) {
             continue;
          }else {
              check = false;
               break;
          }
       }

         if(check == 1) {
           cout << "Yes";
         }else {
             cout << "No";
         }
    
    return 0;
}