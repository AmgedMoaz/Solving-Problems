#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;

long long A[N];

for (int i = 0 ; i < N ; i++)
 {
    cin >> A[i];
 }

for (int i = 0 ; i < N ; i++)
{
 bool flage = false;
  for(int j = 0 ; j < N-1-i; j++ )
 {
    if ( A[j] > A[j+1])
    {
     swap(A[j],A[j+1]);
     flage = true;
    } 
}
if(flage == false)
{
    break;
}
}

for (int i = 0 ; i < N ; i++)
{
    cout << A[i] << " ";
}

    return 0;
}