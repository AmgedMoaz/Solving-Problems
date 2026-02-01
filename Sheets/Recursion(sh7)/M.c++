#include <iostream>
using namespace std;
long long A[100000];
int N,M;
long long suffixSum(int idx, int count) {
    if (count == M) return 0;            // حسبنا M عناصر -> نوقف
    return A[idx] + suffixSum(idx - 1, count + 1);
}
int main ()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

   cin >> N >> M;
   for (int i = 0 ; i < N ; i++) cin >> A[i];
   cout << suffixSum(N-1,0);

    return 0;
}