// Three Numbers Sum

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";
    
    return 0;
}