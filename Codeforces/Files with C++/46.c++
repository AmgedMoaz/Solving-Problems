// Max Sum Subarray of size K
// Write a code to solve the problem by using sliding window technique

#include <bits/stdc++.h>
using namespace std;

int main() {

int n , k;
cin >> n >> k;

int arr[n];
for(int i = 0 ; i < n ; i++)    cin >> arr[i];

long long WindowSum = 0;
for(int i = 0 ; i < k ; i++)    WindowSum += arr[i];

long long maxSum = WindowSum;
for(int i = k ; i < n ; i++) {
    WindowSum -= arr[i-k];
    WindowSum += arr[i];
    maxSum = max(maxSum,WindowSum);
}

cout << maxSum << endl;

    return 0;
}