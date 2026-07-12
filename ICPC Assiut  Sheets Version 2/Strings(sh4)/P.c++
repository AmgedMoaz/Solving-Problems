  // Count Words
#include <bits/stdc++.h>
using namespace std;
 int main() {
  
  string s;
   getline(cin,s);

    int counter = 0;

     for (int i = 0; i < s.size(); i++) {
      if (isalpha(s[i]) && (i == 0 || !isalpha(s[i - 1]))) {
         counter++;
      }
    }

      cout << counter;

    return 0;
}