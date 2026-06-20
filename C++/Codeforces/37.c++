#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; 
  char direction;
  cin >> direction >> s;
  
  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  if(direction == 'L') {
    for(int i : s) {
      int index = keyboard.find(s[i]);
      cout << keyboard[index + 1];
    }
  } else {
    for(int i = 0 ; i < s.length() ; i++) {
      int index = keyboard.find(s[i]);
      cout << keyboard[index - 1];
    }
  }
   return 0;
}