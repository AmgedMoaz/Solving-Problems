  // Palindrome
#include <bits/stdc++.h>
using namespace std;
 int main() {
 
  string s , t;
   cin >> s;

     t = s;
 
      reverse(s.begin(),s.end());
       (s==t) ? cout << "YES" : cout << "NO";
    

     return 0;
  }