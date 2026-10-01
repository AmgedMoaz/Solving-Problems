// Wageeh's Magic Code

#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long x) {
    if (x == 0) return false;

    while (x > 0) {
        int digit = x % 10;

        if (digit != 4 && digit != 7)
            return false;

        x /= 10;
    }

    return true;
}

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 4 || digit == 7)   count++;

        n /= 10;
    }

    if (isLucky(count))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}