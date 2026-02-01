#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N; // قراءة عدد العناصر

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i]; // قراءة عناصر المصفوفة
    }

    // المرور على المصفوفة
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            reverse(A.begin(), A.begin() + i); // عكس ما قبل الصفر
        }
    }

    // طباعة النتيجة
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}