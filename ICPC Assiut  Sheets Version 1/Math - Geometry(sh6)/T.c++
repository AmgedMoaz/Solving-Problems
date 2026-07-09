#include <iostream>
using namespace std;

int main() {
    long long X0, Y0, R;
    int N;
    cin >> X0 >> Y0 >> R >> N;

    for (int i = 0; i < N; i++) {
        long long X1, Y1;
        cin >> X1 >> Y1;
        long long dx = X1 - X0;
        long long dy = Y1 - Y0;
        if (dx * dx + dy * dy <= (long long)R * R) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}