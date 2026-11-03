// Be Fast

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        long long sum = 0;
        for (long long i = 1; i <= n; i++) {
            sum += i * i;
        }
        cout << sum << "\n";
    }

    return 0;
}

// حل اخر O(1)
/*

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        // تطبيق قانون مجموع مربعات أول n عدد طبيعي
        long long sum = n * (n + 1) * (2 * n + 1) / 6;
        cout << sum << "\n";
    }

    return 0;
}
    
    */