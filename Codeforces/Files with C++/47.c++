// Minimum Size Subarray Sum
// Write a code to solve the problem by using sliding window with dynamic size technique

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, minAns = INT_MAX;
    long long currentSum = 0;

    for(int right = 0; right < n; right++) {
        currentSum += arr[right];

        while(currentSum >= target) {
            minAns = min(minAns, right - left + 1);
            currentSum -= arr[left];
            left++;
        }
    }

    // لو minAns متغيّرتش، معناه مفيش Subarray بتحقق الشرط، فنطبع 0
    if (minAns == INT_MAX) {
        cout << 0 << endl;
    } else {
        cout << minAns << endl;
    }

    return 0;
}