// YES or YES?

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

while(t--) {
    string s;
    cin >> s;

    if(s[0] == 'Y' or s[0] == 'y') {
        if(s[1] == 'E' or s[1] == 'e') {
            if(s[2] == 'S' or s[2] == 's') {
                cout << "YES" << endl;
                continue;
            }
        }
    }
    cout << "NO" << endl;
}

    return 0;
}