// Cabbages
#include <bits/stdc++.h> 
using namespace std;

int main() {

    long long n, a, x, y;
    cin >> n >> a >> x >> y;

    if (n <= a) {
        cout << n * x << "\n";
    } else {
        cout << (a * x) + ((n - a) * y) << "\n";
    }

    return 0;
}