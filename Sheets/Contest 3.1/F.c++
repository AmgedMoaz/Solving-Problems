#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int l = 0, r = n - 1;

    while (l <= r) {
        cout << a[l++] << " ";
        if (l <= r) {
            cout << a[r--] << " ";
        }
    }

    return 0;
}