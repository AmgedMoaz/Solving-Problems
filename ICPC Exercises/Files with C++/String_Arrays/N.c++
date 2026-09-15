// Dima and Friends

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n , m;
    cin >> n >> m;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    sort(arr,arr+n);

    int profit = 0;
    for(int j = 0 ; j < m and j < n ; j++) {
        if(arr[j] <= 0) {
            profit += abs(arr[j]);
        }else {
            break;
        }
    }
       cout << profit << endl;

    return 0;
}