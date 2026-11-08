// Three Numbers Sum

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k , s;
    cin >> k >> s;

    int x, y, z;

    int count = 0;

    for (x = 0; x <= k; x++) {
        for (y = 0; y <= k; y++) {
            z = s - x - y;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}