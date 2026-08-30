#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;   // مؤشرين على الطرفين
    int sereja = 0, dima = 0;
    bool turn = true;       // true = دور سريجا، false = دور ديمـا

    while (l <= r) {
        int chosen;
        if (arr[l] > arr[r]) {
            chosen = arr[l];
            l++;
        } else {
            chosen = arr[r];
            r--;
        }

        if (turn) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
        turn = !turn; // نبدل الدور
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}

