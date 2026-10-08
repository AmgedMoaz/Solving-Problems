// Sereja and Dima

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
 
    int right = n-1;
    int left = 0;
    int sum1 = 0;
    int sum2 = 0;
    bool Urturn = true;
    for( ; left <= right ; ) {
        if(Urturn) {
            if(arr[left] > arr[right]) {
                sum1 += arr[left];
                left++;
            }else {
                sum1 += arr[right];
                right--;
            }
            Urturn = false;
        }else {
            if(arr[left] > arr[right]) {
                sum2 += arr[left];
                left++;
            }else {
                sum2 += arr[right];
                right--;
            }
            Urturn = true;
        }
    }
    cout << sum1 << " " << sum2;

    return 0;
}