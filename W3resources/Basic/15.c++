#include <iostream>
using namespace std;
string Find (string word) {
if (word.length() > 2 && word.substr(0,2) == "if") {
    return word;
}
else {
    return "if " + word;
}
}
int main () {
cout << Find("if else") << endl;
cout << Find("else") << endl;
  return 0;
}