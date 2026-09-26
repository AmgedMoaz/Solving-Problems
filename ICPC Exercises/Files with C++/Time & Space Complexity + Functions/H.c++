// Helpful Maths

#include <bits/stdc++.h>
using namespace std;

void solve(string phrase);

int main() {

string s;   cin >> s;
solve(s);

    return 0;
}
void solve(string s) {
    string c;
    for(int i = 0 ; i < s.size() ; i++) {
        if(isdigit(s[i])) {
            c.push_back(s[i]);
        }
    }
    sort(c.begin() , c.end());
    for(int i = 0 ; i < c.size() ; i++) {
        cout << c[i];
        if(i != c.size()-1) {
            cout << '+';
        }
    }
}