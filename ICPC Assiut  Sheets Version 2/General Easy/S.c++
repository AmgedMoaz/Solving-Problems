// Good Number

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int goodCount = 0;

    while(n--) {
        string s;
        cin >> s;

        bool found[10] = {false};

        for (char c : s) {
            int digit = c - '0';
            if (digit <= k) {
                found[digit] = true;
            }
        }

        bool allFound = true;
        for (int d = 0; d <= k; d++) {
            if (!found[d]) {
                allFound = false;
                break;
            }
        }

        if (allFound) {
            goodCount++;
        }
    }

    cout << goodCount << "\n";

    return 0;
}