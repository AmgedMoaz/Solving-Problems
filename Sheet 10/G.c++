#include <bits/stdc++.h>
#include <cmath>  // للتأكد من وجود log
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    long double sumLog = 0;
    long long maxA = 0;

    for (int i = 0; i < N; i++) {
        long long a;
        cin >> a;
        sumLog += log((long double)a);  // بدل logl بـ log
        maxA = max(maxA, a);
    }

    long long lo = 1, hi = maxA + 1;
    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        long double left = (long double)N * log((long double)mid);
        if (left > sumLog) {
            hi = mid; // mid ممكن يكون الجواب
        } else {
            lo = mid + 1;
        }
    }

    cout << lo << "\n";
    return 0;
}