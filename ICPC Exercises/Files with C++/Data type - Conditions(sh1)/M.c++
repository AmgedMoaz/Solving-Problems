// Expired?
#include <bits/stdc++.h> 
using namespace std;

int main() {

long long x, a, b;
    cin >> x >> a >> b;

    if (b <= a) {
        cout << "delicious" << "\n";
    } else if (b - a <= x) {
        cout << "safe" << "\n";
    } else {
        cout << "dangerous" << "\n";
    }

    return 0;
}