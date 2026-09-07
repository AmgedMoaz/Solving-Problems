// Following Directions

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

while(t--) {

    short n;
    cin >> n;

    string s;
    cin >> s;

    bool check = false;
    int x = 0 , y = 0;
     for(int i = 0 ; i < s.length() ; i++) {
        if(s[i] == 'L') {
            x--;
          }else if(s[i] == 'R') {
            x++;
          }else if(s[i] == 'U') {      
            y++;
          }else {
            y--;
          }
     if(x == 1 && y == 1) {
         check = true;
       }
    }
    if(check) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

    return 0;
}