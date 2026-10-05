// Palindromes Replace

#include <bits/stdc++.h>
using namespace std;

int main() {
    
string s;
cin >> s;

for(int i = 0 , j = s.size() - 1; i <= j; i++, j--){
    if(s[i] == '?' and s[j] == '?'){
        s[i] = 'a';
        s[j] = 'a';
    }else if(s[i] == '?') {
        s[i] = s[j];
    }else if(s[j] == '?'){
        s[j] = s[i];
    }else if(s[i] != s[j]){
        cout << -1 << endl;
        return 0;
    }
}
cout << s << endl;

    return 0;
}