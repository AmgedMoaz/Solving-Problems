// Night at the Museum

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    int diff = 0;
    char ch = 'a';
    for(int i = 0 ; i < s.size() ; i++) {
        int d = abs(ch - s[i]);
        diff += min(d,26-d);
        ch = s[i];
    }
    cout << diff << endl;

    return 0;
}