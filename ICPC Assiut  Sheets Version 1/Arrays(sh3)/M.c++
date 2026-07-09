#include <iostream>
#include <algorithm>
using namespace std; 
int main ()
{
int N;
cin >> N;

int A[N];
for(int i = 0 ; i < N ; i++)
{
    cin >> A[i];
}
int maxV=A[0] , minV=A[0];
int pmax=0,pmin=0;  

for (int i = 1; i < N; i++)
{
if (maxV < A[i])
{
maxV=A[i];
pmax=i;
}
if (minV > A[i])
{
  minV=A[i];
    pmin = i;
}

}
A[pmax]=minV;
A[pmin]=maxV;

for (int i = 0 ; i < N ; i++)
{
    cout << A[i] << " ";
}
    return 0;
}