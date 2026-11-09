// Jzzhu and Children

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int lastChild = 1, maxRounds = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        int rounds = (a + m - 1) / m;
        if (rounds >= maxRounds) {   // >= عشان في التعادل ناخد الأخير
            maxRounds = rounds;
            lastChild = i;
        }
    }

    cout << lastChild << "\n";
    return 0;
}