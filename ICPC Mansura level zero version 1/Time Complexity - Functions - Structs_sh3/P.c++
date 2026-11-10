// Thorns and Coins

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    string s;
    int coins;
    while (t--) {
        cin >> n;
        cin >> s;

        coins = 0;
        for(int i = 0 ; i < n ; i++) {
            if(i+1 < n && s[i] == '*' && s[i+1] == '*') {
                break;
            }

            if(s[i] == '@') {
                coins++;
            }   
        }

        cout << coins << "\n";
    }

    return 0;
}