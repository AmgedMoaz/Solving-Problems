// Worms Evolution

#include <bits/stdc++.h>
using namespace std;

int n;
void solve(int arr[]);

int main() {
// لزيادة سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)    cin >> arr[i];

    solve(arr);

    return 0;
}
void solve(int arr[]) {
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            for(int k = 0 ; k < n ; k++) {
                if(i != j and i != k and j != k) {
                    if(arr[i] == arr[j] + arr[k]) {
                        cout << i+1 << " " << j+1 << " " << k+1 << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
}