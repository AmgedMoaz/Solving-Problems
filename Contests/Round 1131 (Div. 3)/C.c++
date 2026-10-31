// Math and Physics

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
        vector<int> a(n);
        long long S = 0;
        bool anyBig = false, midBig = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i];
            if (a[i] >= 2) {
                anyBig = true;
                if (i > 0 && i < n - 1) midBig = true;
            }
        }

        if (!anyBig) cout << -1 << "\n";
        else if (midBig) cout << S - 1 << "\n";
        else cout << S - (n - 1) << "\n";
    }
    return 0;
}