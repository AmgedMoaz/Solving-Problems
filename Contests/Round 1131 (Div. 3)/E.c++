// Swap and Negate

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لسرعة الإدخال والإخراج في لغة C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            b[i - 1] = (i % 2 == 0) ? x : -x;
        }
        sort(b.rbegin(), b.rend());

        int P = n / 2; // عدد المواضع الزوجية (إشارتها +)
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (i < P) ans += b[i];
            else ans -= b[i];
        }
        cout << ans << "\n";
    }
    return 0;
}