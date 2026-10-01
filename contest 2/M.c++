// Yara’s Gryffindor Square

#include <bits/stdc++.h>
using namespace std;

int main() {
   
int t;
cin >> t;

int a , b , c, d;
while(t--) {
    cin >> a >> b >> c >> d;
    if(a == b and b == c and c == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;

    }
}

    return 0;
}