#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int N; 
cin >> N;

int A[N][N];

for ( int i = 0 ; i < N ; i++)
{
  for ( int j = 0 ; j < N ; j++)
  {
   cin >> A[i][j];
  }

}

int sum1 = 0, sum2 = 0;

    for (int i = 0; i < N; i++) {
        sum1 += A[i][i];             // القطر الرئيسي
        sum2 += A[i][N - 1 - i];     // القطر الثانوي
    }

    cout << abs(sum1 - sum2);  // الفرق المطلق

    return 0;
}