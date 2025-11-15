#include <iostream> 
using namespace std;
int main ()
{

int N , Q;
cin >> N >> Q;


    long long A[N + 1];       // 1-based indexing
    long long prefix[N + 1];  // مصفوفة المجموع التراكمي
    prefix[0] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << '\n';
    }

    return 0;
}