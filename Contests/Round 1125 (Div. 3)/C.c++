// Unrequited Love

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    int m = n - 4; // عدد الثلاثيات المتاحة
    if (m <= 0) {
        cout << 0 << "\n";
        return;
    }
    
    // تخزين كل ثلاثية كـ (القيمة, المؤشر)
    vector<pair<long long, int>> triads(m);
    for (int i = 1; i <= m; ++i) {
        long long val = a[i] + a[i + 2] - a[i + 4];
        triads[i - 1] = {val, i};
    }
    
    // ترتيب حسب القيمة تصاعدياً، وإذا تساوت حسب المؤشر
    sort(triads.begin(), triads.end());
    
    long long total_pairs = 0;
    
    // تجميع القيم المتساوية مع بعضها
    int l = 0;
    while (l < m) {
        int r = l;
        while (r < m && triads[r].first == triads[l].first) {
            r++;
        }
        
        // الآن الفترة من l إلى r-1 لها نفس القيمة
        // نجمع مؤشرات هذه الثلاثيات فقط (وهي مرتبة أصلاً لأنها مأخوذة بترتيبها)
        vector<int> indices;
        for (int i = l; i < r; ++i) {
            indices.push_back(triads[i].second);
        }
        
        // حساب عدد الأزواج التي الفرق بين مؤشراتها >= 5
        int sz = indices.size();
        int ptr = 0;
        for (int i = 0; i < sz; ++i) {
            while (ptr < sz && indices[i] - indices[ptr] >= 5) {
                ptr++;
            }
            // العناصر من 0 إلى ptr-1 تبعد مسافة >= 5 عن العنصر i
            total_pairs += ptr;
        }
        
        l = r;
    }
    
    cout << total_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}