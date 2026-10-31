// Fraction and Six

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لسرعة الإدخال والإخراج في لغة C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string p, q;
        cin >> n >> m >> p >> q;

        int cnt[26] = {0};
        for (char c : p) cnt[c - 'a']++;
        for (char c : q) cnt[c - 'a']--;

        bool ok = true;
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            int need = (c == 's' || c == 'i' || c == 'x') ? 1 : 0;
            if (cnt[i] != need) ok = false;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}