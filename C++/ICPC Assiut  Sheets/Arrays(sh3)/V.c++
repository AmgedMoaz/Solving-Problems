#include <iostream>
using namespace std;
int main ()
{
int N , M;
cin >> N >> M;

int A[N];
    int frequency[M + 1] = {0}; // مصفوفة للتكرارات

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        frequency[A[i]]++; // زيادة التكرار مباشرة
    }

    for (int i = 1; i <= M; i++) {
        cout << frequency[i] << "\n";
    }

    return 0;
}