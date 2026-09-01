// Prepend and Append
// Write a code to solve problem by using two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {

    short t;
    cin >> t;

    while(t--) {
        short n;
        cin >> n;
        short ans = n;

        string s;
        cin >> s;

        int left = 0 , right = n-1;
        while(left <= right) {
            if(s[left] != s[right]) {
                ans -= 2;
                left++;
                right--;
            }else {
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}