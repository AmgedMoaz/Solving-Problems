// Repetitions

#include <bits/stdc++.h>
using namespace std;

int solve(string s);

int main() {

string s;   cin >> s;
cout << solve(s);

    return 0;
}
int solve(string s) {
    int curr_len = 1;
    int max_len = 1;
    for(int i = 1 ; i < s.length() ; i++) {
        if(s[i] == s[i-1]) {
            curr_len++;
        }else {
            curr_len = 1;
        }
        max_len = max(curr_len,max_len);
    }
    return max_len;
}