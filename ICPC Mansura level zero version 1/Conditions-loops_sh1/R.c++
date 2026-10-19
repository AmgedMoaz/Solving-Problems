// Shampoo

#include <bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v, a, b, c;
    cin >> v >> a >> b >> c;

    while (true) {
        if (v < a) {
            cout << "F\n";
            break;
        }
        v -= a;

        if (v < b) {
            cout << "M\n";
            break;
        }
        v -= b;

        if (v < c) {
            cout << "T\n";
            break;
        }
        v -= c;
    }

    return 0;
}