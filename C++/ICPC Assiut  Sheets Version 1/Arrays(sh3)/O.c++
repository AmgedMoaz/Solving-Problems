#include <iostream> 
using namespace std;
int main ()
{
long long A[54];

int N;
cin >> N;

A[1]=0;
A[2]=1;

for (int i = 3 ; i <= N ; i++)
{
   A[i]= A[i-1] + A[i-2];
}
cout << A[N];


   return 0;
}