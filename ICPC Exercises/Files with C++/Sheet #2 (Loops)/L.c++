// Diagonal Difference

#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin >> n;

int arr[n][n];
for(int i = 0 ; i < n ; i++) {
    for(int j = 0 ; j < n ; j++) {
        cin >> arr[i][j];
    }
}

int sum_primary = 0 , sum_secondary = 0;
for(int i = 0 ; i < n ; i++) {
    sum_primary += arr[i][i];
    sum_secondary += arr[i][n-i-1];
}
cout << abs(sum_primary-sum_secondary);

    return 0;
}