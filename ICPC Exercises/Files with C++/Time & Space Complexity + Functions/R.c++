// Long Sequence

#include <bits/stdc++.h>
using namespace std;

int n;
long long solve(long long arr[] , long long x , long long totSum);

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
long long arr[n];
long long totSum = 0;
for(int i = 0 ; i < n ; i++) {
    cin >> arr[i];
    totSum += arr[i];
}

long long x;    cin >> x;

cout << solve(arr,x,totSum) << endl;

    return 0;
}
long long solve(long long arr[] , long long x , long long totSum) {
    
    long long fullyCycle = x/totSum;
    long long currentSum = fullyCycle*totSum;
    long long ans = fullyCycle * n;

    int i = 0;
    while(currentSum <= x) {
        currentSum += arr[i];
        ans++;
        i = (i+1)%n;
    }
    return ans;
}