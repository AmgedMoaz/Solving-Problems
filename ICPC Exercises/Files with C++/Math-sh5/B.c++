// Difference Operations

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    int arr[101];
    while(t--) {
        cin >> n;
        bool flag = true;
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        for(int i = 1 ; i < n ; i++) {
            if(arr[i] % arr[0] != 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}