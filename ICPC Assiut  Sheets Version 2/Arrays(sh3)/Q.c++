 // count Subarrays
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                if (j == i)
                    ans++;

                else if (arr[j] >= arr[j - 1])
                    ans++;

                else
                    break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}