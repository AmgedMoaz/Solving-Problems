// Your First Judge 
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string standard_phrase = "Hello,World!";

    if(s.length() == standard_phrase.length()) {
        if(s == standard_phrase) {
            cout << "AC" << endl;
        }else {
            cout << "WA" << endl;
        }
    }else {
        cout << "WA" << endl;
    }

    return 0;
}