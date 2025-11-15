#include <iostream>
using namespace std;
int main ()
{

int N,K;
cin >> N >> K;

int A[N],B[K];
for (int i = 0 ; i < N ; i++)
{
    cin >> A[i];
}

for (int i = 0 ; i < K ; i++)
{
    cin >> B[i];
}

int index = 0;

for (int i = 0 ; i < N && index < K ; i++)
{
   if (A[i]==B[index])
   {
    index++;
   }
}

if (index == K)
{
    cout << "YES";
}
else
{
    cout << "NO";
}



    return 0;
}