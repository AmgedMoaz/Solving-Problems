// 

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

int n;   string s;
while(t--) {
    cin >> n;
    cin >> s;
    char direction = 'E';
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == '0') {
                if(direction == 'E') {
                    direction = 'S';
                }else if(direction == 'S') {
                    direction = 'W';
                }else if(direction == 'W') {
                    direction = 'N';
                }else {
                    direction = 'E';
                }
            }else {
                if(direction == 'E') {
                    direction = 'N';
                }else if(direction == 'N') {
                    direction = 'W';
                }else if(direction == 'W') {
                    direction = 'S';
                }else {
                    direction = 'E';
                }
            }
    }
      cout << direction << endl;
}

    return 0;
}