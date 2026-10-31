// Lock and Unlock

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
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());
        long long med = a[n / 2];

        long long cost = 0;
        for (int i = 0; i < n; i++) cost += llabs(a[i] - med);

        long long ops = a[n - 1] - a[0];

        cout << cost << " " << ops << "\n";
    }
    return 0;
}