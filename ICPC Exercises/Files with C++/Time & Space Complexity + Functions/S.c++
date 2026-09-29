// Booby Prize

#include <bits/stdc++.h>
using namespace std;

void solve(long long arr[], int n);

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}

void solve(long long arr[], int n) {
    // 1. إنشاء مصفوفة مؤقتة بنسخ العناصر فيها
    long long temp[n];
    for(int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    
    sort(temp, temp + n);
    long long target = temp[n - 2];
    
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == target) {
            cout << (i + 1) << "\n";
            break;
        }
    }
}