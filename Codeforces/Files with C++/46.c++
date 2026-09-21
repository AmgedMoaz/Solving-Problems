// Max Sum Subarray of size K
// Write a code to solve the problem by using sliding window with fixed size technique

#include <bits/stdc++.h>
using namespace std;

int main() {

int n , k;
cin >> n >> k;

int arr[n];
for(int i = 0 ; i < n ; i++)    cin >> arr[i];

long long windowSum = 0;
for(int i = 0 ; i < k ; i++)    windowSum += arr[i];

long long maxSum = windowSum;
for(int i = k ; i < n ; i++) {
    windowSum -= arr[i-k];
    windowSum += arr[i];
    maxSum = max(maxSum,windowSum);
}

cout << maxSum << endl;

    return 0;
}