#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < (int)x.size(); i++) {
        int d = x[i] - '0';
        int inv = 9 - d;

        if (i == 0 && inv == 0) {
            // ماينفعش نخلي أول خانة = 0
            continue;
        }

        if (inv < d) {
            x[i] = inv + '0';
        }
    }

    cout << x << "\n";
    return 0;
}