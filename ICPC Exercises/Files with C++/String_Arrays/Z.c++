// Pangram

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    short n;  cin >> n;
    string phrase;
    cin >> phrase;

    set<char> arr;
    for(int i = 0 ; i < n ; i++) {
        char c = tolower(phrase[i]);
        arr.insert(c);
    }
      (arr.size() == 26)? cout << "YES\n" : cout << "NO\n";

    return 0;
}