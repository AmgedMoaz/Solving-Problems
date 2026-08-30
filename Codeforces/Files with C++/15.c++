#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;

    int counter = 0;
    char current = 'a'; // البداية من a

    for (char c : word) {
        int diff = abs(c - current);       // الفرق المباشر
        int step = min(diff, 26 - diff);   // الأصغر بين الاتجاهين
        counter += step;
        current = c; // تحديث الموضع الحالي
    }

    cout << counter << endl;
    return 0;
}