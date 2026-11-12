// Books on a Shelf

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (auto &x : h) cin >> x;
        sort(h.begin(), h.end());

        vector<int> left, mid, right;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && h[j] == h[i]) j++;
            int cnt = j - i;

            left.push_back(h[i]);          // نسخة لليسار
            if (cnt >= 2) {
                right.push_back(h[i]);     // نسخة لليمين
                for (int k = 2; k < cnt; k++)
                    mid.push_back(h[i]);   // الباقي في المنتصف
            }
            i = j;
        }
        reverse(right.begin(), right.end()); // تنازلي

        cout << left.size() + right.size() << "\n";
        for (int x : left)  cout << x << " ";
        for (int x : mid)   cout << x << " ";
        for (int x : right) cout << x << " ";
        cout << "\n";
    }
    return 0;
}