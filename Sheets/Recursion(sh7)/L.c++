#include <iostream>
using namespace std;
long long A[1000];
int N;
long long Sum(int Number)
{
    if (Number == N) return 0;
    return A[Number] + Sum(Number+1);
}
int main ()
{
   cin >> N;
   for (int i = 0 ; i < N ; i++) cin >> A[i];
   cout << Sum(0);


    return 0;
}