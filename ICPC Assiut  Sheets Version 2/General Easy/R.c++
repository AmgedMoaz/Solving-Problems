// Arrival of the General

#include <bits/stdc++.h>

using namespace std;

int main() {
    // تحسين سرعة إدخال وإخراج البيانات
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    int minValue = 0, maxValue = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            minValue = arr[i];
            maxValue = arr[i];
        } else {
            minValue = min(minValue, arr[i]);
            maxValue = max(maxValue, arr[i]);
        }
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == maxValue) {
            maxIndex = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == minValue) {
            minIndex = i;
        }
    }

    int totalSteps = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex) {
        totalSteps--;
    }

    cout << totalSteps << "\n";

    return 0;
}