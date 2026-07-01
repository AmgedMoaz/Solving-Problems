#include <iostream>
using namespace std;

void printDigits(int N) {
    if (N < 10) {
        cout << N << " ";
        return;
    }
    printDigits(N / 10);
    cout << N % 10 << " ";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int Number;
        cin >> Number;
        if (Number == 0) {
            cout << "0";
        } else {
            printDigits(Number);
        }
        cout << "\n";
    }
    return 0;
}