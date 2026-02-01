#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);  // ترتيب المصفوفة قبل البحث الثنائي

    while (Q--) {
        long long X;
        cin >> X;

        if (binary_search(A, A + N, X)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}