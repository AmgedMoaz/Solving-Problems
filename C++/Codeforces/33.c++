#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<bool> seen(n + 1, false);
    int current = n;

    for (int i = 0; i < n; i++) {
        seen[a[i]] = true;

        while (current >= 1 && seen[current]) {
            cout << current << " ";
            current--;
        }
        cout << "\n";
    }

    return 0;
}