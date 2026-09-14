// Arithmetic Array

#include <bits/stdc++.h>
using namespace std;

int main() {

    short t;
    cin >> t;
    while(t--) {
        short n;
        cin >> n;

        int arr[n];
        long long sum = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum < n) {
            cout << 1 << endl;
        }else {
            cout << (sum - n) << endl;
        }
    }

    return 0;
}