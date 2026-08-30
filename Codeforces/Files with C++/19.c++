#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int pos = 1; // البداية على الحجر الأول
    for (char c : t) {
        if (s[pos - 1] == c) {
            pos++;
        }
    }

    cout << pos << endl;
    return 0;
}