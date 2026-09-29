// Reorder Cards

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long h, w;
    int n;
    cin >> h >> w >> n;

    vector<int> a(n), b(n);
    vector<int> rows(n), cols(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        rows[i] = a[i];
        cols[i] = b[i];
    }

    // 1. ترتيب وإزالة التكرار للصفوف والأعمدة
    sort(rows.begin(), rows.end());
    rows.erase(unique(rows.begin(), rows.end()), rows.end());

    sort(cols.begin(), cols.end());
    cols.erase(unique(cols.begin(), cols.end()), cols.end());

    // 2. إيجاد الإحداثيات الجديدة لكل كارت باستخدام lower_bound
    for (int i = 0; i < n; i++) {
        // حساب الترتيب الجديد (index + 1)
        int new_row = lower_bound(rows.begin(), rows.end(), a[i]) - rows.begin() + 1;
        int new_col = lower_bound(cols.begin(), cols.end(), b[i]) - cols.begin() + 1;

        cout << new_row << " " << new_col << "\n";
    }

    return 0;
}