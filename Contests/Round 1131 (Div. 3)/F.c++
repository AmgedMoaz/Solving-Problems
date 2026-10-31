// Modulo and Counting

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main() {
    // لسرعة الإدخال والإخراج في لغة C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int T = m + 2;
        vector<long long> f(T + 2, 0), P(T + 2, 0);
        f[2] = 1;
        long long ans = 0;
        ans = (ans + f[T]) % MOD; // j = 1
        for (int j = 2; j <= n; j++) {
            // prefix sums of f over 2..v
            P[1] = 0;
            for (int v = 2; v <= T; v++) P[v] = (P[v - 1] + f[v]) % MOD;
            vector<long long> g(T + 2, 0);
            for (int w = 2; w <= T; w++) {
                int lo = max(2, (w + 2) / 2);
                g[w] = ((P[w] - P[lo - 1]) % MOD + MOD) % MOD;
            }
            f = g;
            ans = (ans + f[T]) % MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}