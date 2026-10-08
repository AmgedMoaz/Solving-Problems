// Plus One on the Subset

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        int max_val = *max_element(arr.begin(), arr.end());
        int min_val = *min_element(arr.begin(), arr.end());
        cout << (max_val - min_val) << endl;
    }

    return 0;
}