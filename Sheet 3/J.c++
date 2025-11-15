#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{

int N;
cin >> N;

int A[N];

for (int i = 0 ; i < N ; i++)
{
    cin >> A[i];
}

int counter = 0;
sort(A,A+N);

for (int i = 0 ; i < N ; i++)
{
if (A[i] == A[0])
  {
    counter++;
  }
 else 
 {
    break;
 }
}
if (counter%2==0)
{
    cout << "Unlucky";
}
else 
{
     cout << "Lucky";
}
    return 0;
}