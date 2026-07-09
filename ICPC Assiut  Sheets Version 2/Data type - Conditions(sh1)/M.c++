// Capital or Small or Digit
#include <bits/stdc++.h>
using namespace std;
int main() {

    char ch;
    cin >> ch;
    (ch >= '0' && ch <= '9') ? cout << "IS DIGIT" << endl : (ch >= 'A' && ch <= 'Z')? cout << "ALPHA\nIS CAPITAL" << endl : (ch >= 'a' && ch <= 'z')? cout << "ALPHA\nIS SMALL" << endl: cout << "IS SPECIAL" << endl;

    return 0;
}