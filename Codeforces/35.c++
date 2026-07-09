#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   string word;
    cin >> word;

    for(int i = 0 ; i < n ; i++) {
        word[i] = tolower(word[i]);
    }

    set <char> unique_chars(word.begin(), word.end());
    if(unique_chars.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

   return 0;
}