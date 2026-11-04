// Vlad and the Best of Five

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string s;
    int count = 0;
    while (t--) {
        cin >> s;

        sort(s.begin(), s.end());
        for(int i = 0 ; i < 5 ; i++) {
            if(s[i] == 'A') {
                count++;
            }
        }

        if(count >= 3) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
        count = 0;
    }

    return 0;
}