#include <iostream>
#include <vector>
using namespace std;
// دالة لفحص العدد إذا كان أولي
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // نحسب أعداد فيبوناتشي لغاية F50
    long long fib[51];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // نخزن مسبقاً النتائج لكل F_n
    vector<string> results(51);
    for (int i = 1; i <= 50; i++) {
        if (isPrime(fib[i])) results[i] = "prime";
        else results[i] = "not prime";
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << results[n] << "\n";
    }

    return 0;
}