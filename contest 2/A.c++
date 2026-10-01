// The Secret Message

#include <bits/stdc++.h>
using namespace std;

int main () {
    
int n;
cin >> n;

string s;
cin >> s;

set<char> st;
for (int i = 0; i < n; i++) {
    char c = tolower(s[i]);
    st.insert(c);
}

if (st.size() == 26) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}
    
    return 0;
}