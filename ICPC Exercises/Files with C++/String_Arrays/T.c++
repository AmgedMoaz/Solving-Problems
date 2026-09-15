// Night at the Museum

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;

    int sum = 0;
    char first  = 'a';
    for(int i = 0 ; i < word.size() ; i++) {
        int difference = abs(first-word[i]);
        difference = min(difference,26-difference);
        sum += difference;
        first = word[i];
    }
      cout << sum;

    return 0;
}