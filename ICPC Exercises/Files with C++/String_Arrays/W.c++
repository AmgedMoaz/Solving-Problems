// Word Capitalization

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;  cin >> word;

    word[0] = toupper(word[0]);
    cout << word << endl;

    return 0;
}