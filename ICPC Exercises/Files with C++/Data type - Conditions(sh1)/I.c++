// Signed Difficulty
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x , y;
    char s;
    cin >> x >> s >> y;

    if(y >= 0 and y <= 2) {
        cout << x << "-\n";
    }else if(y >= 3 and y <= 6) {
        cout << x << "\n";
    }else {
        cout << x << "+\n";
    }

    return 0;
}