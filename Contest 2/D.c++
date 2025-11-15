#include <iostream>
#include <algorithm>
using namespace std;

long long sum_from_to(int a, int b) {
    long long A = a;
    long long B = b;
    return (B * (B + 1)) / 2 - (A * (A - 1)) / 2;
}

int main() {
    int T;
    cin >> T;

    int L, R;
    for (int i = 0; i < T; ++i) {
        cin >> L >> R;
        int start = min(L, R);
        int end = max(L, R);
        cout << sum_from_to(start, end) << endl;
    }

    return 0;
}