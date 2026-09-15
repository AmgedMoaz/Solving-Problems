// Short Substrings

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;
    cin >> t;

    while(t--) {
        string b;
        cin >> b;

        string a = "";
        for(int i = 0 ; i < b.length() ; i += 2) {
            a.push_back(b[i]);
        }
        a.push_back(b[b.size()-1]);
        cout << a << endl;
    }

    return 0;
}