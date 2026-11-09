// Make it Beautiful
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;

    vector<int> v;
    while (t--) {
        
        int n;
        cin >> n;
    
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
        sort(arr, arr + n);
        if(arr[0] == arr[n-1]) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
            v.push_back(arr[n-1]);
            for(int i = 0 ; i < n - 1 ; i++) {
                v.push_back(arr[i]);
            }
            for(int i = 0 ; i < n ; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        v.clear();
    }
 
    return 0;
}