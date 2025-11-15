#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name;
    cin >> Name;

    int freq[26] = {0}; // عداد لتكرار كل حرف

    // نحسب التكرار
    for (char c : Name) {
        freq[c - 'a']++;
    }

    // نطبع الحروف اللي ظهرت فقط بترتيب أبجدي
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}