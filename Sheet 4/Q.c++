#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);  // نقرأ السطر كاملًا

    stringstream ss(line);
    string word;

    bool first = true;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        if (!first) cout << " ";
        cout << word;
        first = false;
    }

    return 0;
}