// Anton and Danik

#include <bits/stdc++.h>
using namespace std;

void solve(string phrase);

int main() {

int n;  cin >> n;
string c;   cin >> c;

solve(c);

    return 0;
}
void solve(string s) {
    int a = 0 , d = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == 'D') d++;
        else if(s[i] == 'A') a++;
    }
    (a > d)? cout << "Anton" :(a < d)? cout << "Danik": cout << "Friendship" ;
}