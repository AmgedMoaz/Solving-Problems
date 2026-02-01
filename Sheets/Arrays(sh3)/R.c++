#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int N;
cin >> N;

int A[N],B[N];
for (int i = 0 ; i < N ; i++)
{
    cin >> A[i];
}
for (int i = 0 ; i < N ; i++)
{
    cin >> B[i];
}

    sort(A, A + N);
    sort(B, B + N);

    // Compare element by element
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";

    return 0;
}