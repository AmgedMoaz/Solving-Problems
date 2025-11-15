#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[1005]; // لأن n ≤ 1000
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; // true = دور سريجا, false = دور ديما

    while (l <= r) {
        int choice;
        if (A[l] > A[r]) choice = A[l++];
        else choice = A[r--];

        if (turn) sereja += choice;
        else dima += choice;

        turn = !turn; // تبديل الدور
    }

    cout << sereja << " " << dima << endl;
    return 0;
}