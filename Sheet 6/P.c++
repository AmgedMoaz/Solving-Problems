#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0 || N == 1) {
        cout << "Number of digits of " << N << "! is 1";
        return 0;
    }

    double sumLog = 0;
    for (int i = 2; i <= N; i++) {
        sumLog += log10(i);
    }

    int digits = floor(sumLog) + 1;
    cout << "Number of digits of " << N << "! is " << digits;
    return 0;
}