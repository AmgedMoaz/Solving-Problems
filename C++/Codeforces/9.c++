#include <bits/stdc++.h>
using namespace std;
    int main () {
      string word;
      int s = 0 , C = 0;
        cin >> word;
     for (int i = 0 ; i < word.length() ; i++) {
        if(isupper(word[i])) {
            C++;
        } else {
            s++;
        }
     }
        if (C > s) {
            transform(word.begin(), word.end(), word.begin(), ::toupper);
        } else {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
        }
        cout << word << endl;
        return 0;
    }