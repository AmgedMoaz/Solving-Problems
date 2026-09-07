// Sum

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--) {
    short a , b , c;
    cin >> a >> b >> c;

    if(a == (b+c)) {
        cout << "YES" << endl;
        continue;
    }else if(b == (a+c)) {
        cout << "YES" << endl;
        continue;
    }else if(c == (a+b)) {
        cout << "YES" << endl;
        continue;
    }
    cout << "NO" << "\n";
}

    return 0;
}