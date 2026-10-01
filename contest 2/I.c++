// The Twin Spell

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool possible = false;

        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << 1 << '\n';
        else
            cout << s.size() << '\n';
    }

    return 0;
}