// Snails

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

int n , a , b;
while(t--) {
    cin >> n >> a >> b;

    if(n <= a) {
        cout << 1 << endl;
        continue;
    }else if(a <= b) {
        cout << -1 << "\n";
        continue;
    }

    int days = 0;
    while(n > 0) {
        n -= a;
        days++;
        if(n <= 0) {
            break;
        }
        n += b;
    }
    cout << days << endl;
}

    return 0;
}