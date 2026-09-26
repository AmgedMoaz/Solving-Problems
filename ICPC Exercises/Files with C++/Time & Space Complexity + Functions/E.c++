// Petya and Strings

#include <bits/stdc++.h>
using namespace std;

int solve(string phrase1 , string phrase2);

int main() {

string a , b;
cin >> a >> b;

cout << solve(a,b) << endl;

    return 0;
}
int solve(string c , string s) {
    for(int i = 0 ; i < c.size() ; i++) {
        c[i] = tolower(c[i]);
        s[i] = tolower(s[i]);
        if(c[i] < s[i])         return -1;
        else if(c[i] > s[i])    return 1;
    }
    return 0;
}