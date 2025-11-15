#include <iostream>
#include <cctype> // for isalpha()
using namespace std;

int main() {
    string S;
    getline(cin, S); // قراءة السطر كاملاً

    int count = 0;
    bool inWord = false;

    for (char c : S) {
        if (isalpha(c)) { // إذا كان حرف (A-Z أو a-z)
            if (!inWord) {
                count++;
                inWord = true; // دخلنا في كلمة
            }
        } else {
            inWord = false; // انتهت الكلمة
        }
    }

    cout << count << endl;

    return 0;
}