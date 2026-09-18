// Combination

#include <bits/stdc++.h>
using namespace std;

long arr[31][31];
long long nCr(int n , int r);

int main() {

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n , r;
cin >> n >> r;

for(int i = 0 ; i <= 30 ; i++) {
    for(int j = 0 ; j <= 30 ; j++) {
        arr[i][j] = -1;
    }
}

cout << nCr(n,r) << endl;

    return 0;
}
long long nCr(int n , int r) {
    if(r == n || r == 0)
        return 1;                                          // base case
    if(r > n)
        return 0;                                          // base case

    if(arr[n][r] != -1)
        return arr[n][r];                                  // base case

    return arr[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);  // recursive case
}