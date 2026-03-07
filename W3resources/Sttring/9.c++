#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool checkEqualOccurrence(const string& str, char char1, char char2) {
    unordered_map<char, int> frequencyMap;  
    for (char c : str) {
        frequencyMap[c]++;
    }
    return frequencyMap[char1] == frequencyMap[char2];
}

int main() {
    string input = "aabcdeef";
    char char1 = 'a';  
    char char2 = 'e';  

    if (checkEqualOccurrence(input, char1, char2)) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl;
    }

    return 0;
}
