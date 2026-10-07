// In Search of Convenience

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x0, y0, R;
    cin >> x0 >> y0 >> R;
    
    // أبسط حل هو إضافة R إلى إحداثي السينات x0
    cout << x0 + R << " " << y0 << "\n";
}

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}