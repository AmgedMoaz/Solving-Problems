#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    long long Min = min(A, B);
    long long Max = max(A, B);

    // إيجاد أول مضاعف لـ X >= Min
    long long first = ((Min + X - 1) / X) * X;

    // إيجاد آخر مضاعف لـ X <= Max
    long long last = (Max / X) * X;

    if (first > Max) {
        cout << 0; // مفيش مضاعفات في المدى
        return 0;
    }

    // عدد الحدود
    long long n = ((last - first) / X) + 1;

    // مجموع المتسلسلة
    long long sum = n * (first + last) / 2;

    cout << sum;
    return 0;
}