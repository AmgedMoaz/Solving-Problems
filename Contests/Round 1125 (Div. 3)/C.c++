// Unrequited Love

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        vector<int> a(n);
        for (auto &x : a) scanf("%d", &x);

        int m = n - 4;
        vector<int> v(m);
        for (int i = 0; i < m; i++) v[i] = a[i] + a[i+2] - a[i+4];

        const int OFF = 20000;               // v في [-20000, 30000]
        vector<long long> cnt(50001, 0);
        for (int x : v) cnt[x + OFF]++;

        long long ans = 0;
        for (long long c : cnt) ans += c * (c - 1) / 2;

        for (int i = 0; i + 2 < m; i++) if (v[i] == v[i+2]) ans--;
        for (int i = 0; i + 4 < m; i++) if (v[i] == v[i+4]) ans--;

        printf("%lld\n", ans);
    }
    
    return 0;
}