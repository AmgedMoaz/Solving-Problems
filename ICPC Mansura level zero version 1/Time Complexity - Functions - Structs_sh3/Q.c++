// Same Differences

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<long long, long long> freq;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            freq[x - i]++;
        }

        long long ans = 0;

        for (auto p : freq) {
            long long k = p.second;
            ans += k * (k - 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}