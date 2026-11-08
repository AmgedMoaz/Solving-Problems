// Increasing

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    bool isIncreasing;
    while (t--) {
        isIncreasing = true;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++) {
            if(arr[i] == arr[i-1]) {
                isIncreasing = false;
                break;
            }
        }

        if (isIncreasing) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}