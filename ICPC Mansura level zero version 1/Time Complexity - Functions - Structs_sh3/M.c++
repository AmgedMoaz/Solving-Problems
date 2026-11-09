// Sort Rectangles
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<pair<long long, int>> v(n);  // {area, index}
 
    for (int i = 1; i <= n; i++) {
        long long minX = LLONG_MAX, maxX = LLONG_MIN;
        long long minY = LLONG_MAX, maxY = LLONG_MIN;
        for (int j = 0; j < 4; j++) {
            long long x, y;
            cin >> x >> y;
            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        }
        v[i - 1] = {(maxX - minX) * (maxY - minY), i};
    }
 
    sort(v.begin(), v.end());
 
    for (auto &p : v) {
        cout << p.second << " " << p.first << "\n";
    }
 
    return 0;
}