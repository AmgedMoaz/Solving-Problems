// Tricky Sum

#include <bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long sum1 = (1LL * n * (n + 1)) / 2;
        
        long long powers_sum = 0;
        long long p = 1;
        while (p <= n) {
            powers_sum += p;
            p *= 2;
        }

        cout << (sum1 - (2 * powers_sum)) << "\n";
    }

    return 0;
}