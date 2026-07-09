#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;

    ll left = 1, right = 2e9, ans = 0;

    while (left <= right) {
        ll mid = (left + right) / 2;
        ll sum = mid * (mid + 1) / 2;

        if (sum <= N) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}