// GCD LCM

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long g, l;
        cin >> g >> l;

        // الشرط الأساسي: يجب أن يقبل L القسمة على G
        if (l % g != 0) {
            cout << -1 << "\n";
        } else {
            // أصغر قيمة ممكنة لـ a هي G، و b ستكون L
            cout << g << " " << l << "\n";
        }
    }

    return 0;
}