// Momen’s Magic Words

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s , t;
    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());
    if(s == t) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

    return 0;
}