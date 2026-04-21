#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    // الزمن باستخدام فرن واحد
    int batches = (n + k - 1) / k; // ceil
    int time_one = batches * t;

    int cakes = 0;
    int time = 0;

    while (true) {
        time++;

        // الفرن الأول
        if (time % t == 0) {
            cakes += k;
        }

        // الفرن الثاني (بعد ما يخلص البناء)
        if (time > d && (time - d) % t == 0) {
            cakes += k;
        }

        if (cakes >= n) {
            break;
        }
    }

    if (time < time_one)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}