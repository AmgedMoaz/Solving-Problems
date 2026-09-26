// Maximize Sum of Digits

#include <bits/stdc++.h>
using namespace std;

int sumDigits(long long n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    string s;
    cin >> s;

    long long x = stoll(s);
    long long ans = x;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            continue;

        string t = s;

        t[i]--;

        for (int j = i + 1; j < s.size(); j++)
            t[j] = '9';

        long long num = stoll(t);

        if (sumDigits(num) > sumDigits(ans) ||
            (sumDigits(num) == sumDigits(ans) && num > ans)) {
            ans = num;
        }
    }

    cout << ans << '\n';

    return 0;
}