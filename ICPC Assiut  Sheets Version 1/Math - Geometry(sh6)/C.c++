#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll A, B;
    cin >> A >> B;

    ll Min = min(A, B);
    ll Max = max(A, B);

    // 1. مجموع جميع الأعداد بين A و B
    ll n = Max - Min + 1;
    ll sum = n * (Min + Max) / 2;
    cout << sum << endl;

    // 2. مجموع الأعداد الزوجية
    ll even_start = (Min % 2 == 0) ? Min : Min + 1;
    ll even_end = (Max % 2 == 0) ? Max : Max - 1;
    ll even_n = ((even_end - even_start) / 2) + 1;
    ll even_sum = even_n * (even_start + even_end) / 2;
    cout << even_sum << endl;

    // 3. مجموع الأعداد الفردية
    ll odd_sum = sum - even_sum;
    cout << odd_sum << endl;

    return 0;
}
