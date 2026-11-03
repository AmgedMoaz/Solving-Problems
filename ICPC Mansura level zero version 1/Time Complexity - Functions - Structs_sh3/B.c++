// Weird Function2

#include <bits/stdc++.h>
using namespace std;

string f(int a, string s1, string s2) {
    if (a == 1) {
        return s1 + s2;
    } else {
        return s2 + s1;
    }
}

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    if (cin >> s1 >> s2) {
        string part1 = f(0, s1, s2) + s1;
        string inner1 = f(1, part1, s2);

        string part2 = f(1, s2, s1);
        string part3 = f(0, s1 + s2, part2);
        string inner2 = s1 + part3;

        string ans = f(1, inner1, inner2);

        cout << ans << "\n";
    }

    return 0;
}