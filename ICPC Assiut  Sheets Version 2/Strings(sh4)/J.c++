  // Count Letters
#include <bits/stdc++.h>
using namespace std;
 int main() {

    string s;
    cin >> s;

     sort(s.begin(), s.end());

      for (int i = 0; i < s.size(); ) {
          int cnt = 0;
           int j = i;

             while (j < s.size() && s[i] == s[j]) {
               cnt++;
                j++;
             }    

              cout << s[i] << " : " << cnt << endl;
 
                i = j;
      } 

     return 0;
  }