#include <iostream>
#include <string>
using namespace std;
int countWords(const string& w) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; i < w.length(); i++) {
        if (w[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (w[i] == ' ' && inWord) {
            inWord = false;
        }
    }
    return count;
}
int main() {
    string input = "python exercises practice solution";
    cout << countWords(input) << endl;
    return 0;
}
