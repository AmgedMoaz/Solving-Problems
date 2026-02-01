#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0, j = n - 1; i <= j; i++, j--) {
        if (s[i] == '?' && s[j] == '?') {
            s[i] = s[j] = 'a'; // أصغر ترتيب لغوي
        } else if (s[i] == '?') {
            s[i] = s[j];
        } else if (s[j] == '?') {
            s[j] = s[i];
        } else if (s[i] != s[j]) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << s << endl;
    return 0;
}
