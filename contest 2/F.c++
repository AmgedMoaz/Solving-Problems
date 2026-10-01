// Yara's Magical Crystals

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;     // مجموع الأجزاء الفردية
        long long maxOdd = 0;  // أكبر جزء فردي
        int total = 0;         // مجموع عدد القسمات على 2

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            while (x % 2 == 0) {
                x = x / 2;
                total++;
            }
            sum += x;
            if (x > maxOdd)
                maxOdd = x;
        }

        long long ans = sum - maxOdd;
        for (int i = 0; i < total; i++)
            maxOdd = maxOdd * 2;
        ans += maxOdd;

        cout << ans << endl;
    }
    return 0;
}