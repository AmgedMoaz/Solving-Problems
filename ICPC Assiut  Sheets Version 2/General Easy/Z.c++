// Decoding

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<char> dq;

    for (int i = 0; i < n; i++) {
        if (n % 2 == 1) {
            if (i % 2 == 0) {
                dq.push_back(s[i]);
            } else {
                dq.push_front(s[i]);
            }
        } else {
            if (i % 2 == 0) {
                dq.push_front(s[i]);
            } else {
                dq.push_back(s[i]);
            }
        }
    }

    for (auto c : dq) {
        cout << c;
    }
    cout << "\n";

    return 0;
}