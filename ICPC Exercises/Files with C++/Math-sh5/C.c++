// Primes

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2 ; i * i <= n ; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n == 2) {
        cout << -1 << endl;
        return 0;
    }

    if(isPrime(n-2)) {
        cout << 2 << " " << (n-2) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}