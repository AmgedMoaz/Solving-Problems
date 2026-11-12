// Stubborn Pen

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    int countSwich , n;
    string s;
    while(t--) {
        cin >> n >> s;

        countSwich = 0;

        for(int i = 0; i < n; i++) {
            if(i == 0 ) {
                if(s[i] == 'B') {
                    countSwich++;
                }
            }else {
                if(s[i] == s[i-1]) {
                    countSwich++;
                }
            }
        }
        cout << countSwich << endl;
    }

    return 0;
}