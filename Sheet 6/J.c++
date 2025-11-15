#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool firstTerm = true; // للتحكم في وضع علامة * بين الحدود

    // تجربة القسمة على 2
    int count = 0;
    while (N % 2 == 0) {
        N /= 2;
        count++;
    }
    if (count > 0) {
        cout << "(2^" << count << ")";
        firstTerm = false;
    }

    // تجربة القسمة على الأعداد الفردية
    for (long long i = 3; i * i <= N; i += 2) {
        count = 0;
        while (N % i == 0) {
            N /= i;
            count++;
        }
        if (count > 0) {
            if (!firstTerm) cout << "*";
            cout << "(" << i << "^" << count << ")";
            firstTerm = false;
        }
    }

    // لو باقي عدد أكبر من 1، يبقى هو عدد أولي
    if (N > 1) {
        if (!firstTerm) cout << "*";
        cout << "(" << N << "^1)";
    }

    return 0;
}