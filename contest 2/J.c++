// Mariim’s Magic Challenge

#include <bits/stdc++.h>
using namespace std;

int main() {
   
int t;
cin >> t;

int a , b , c; 
while(t--) {
    cin >> a >> b >> c;
    if(a + b >= 10) {
        cout << "YES" << endl;
        continue;
    }else if(a + c >= 10) {
        cout << "YES" << endl;
        continue;
    }else if(b + c >= 10) {
        cout << "YES" << endl;
        continue;
    }

    cout << "NO" << endl;
}

    return 0;
}