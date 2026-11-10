// The best 3seer 2sab!

#include <bits/stdc++.h>
using namespace std;

struct Cup {
    double v, l, ratio;
};

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double L;
    cin >> n >> L;

    vector<Cup> cups(n);

    for (int i = 0; i < n; i++) {
        cin >> cups[i].v >> cups[i].l;
        cups[i].ratio = cups[i].v / cups[i].l;
    }

    sort(cups.begin(), cups.end(),
        [](Cup a, Cup b) {
            return a.ratio > b.ratio;
        });

    double remaining = L;
    double ans = 0;

    for (int i = 0; i < n; i++) {
        if (cups[i].l <= remaining) {
            ans += cups[i].v;
            remaining -= cups[i].l;
        }
        else {
            ans += cups[i].v * (remaining / cups[i].l);
            break;
        }
    }

    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}