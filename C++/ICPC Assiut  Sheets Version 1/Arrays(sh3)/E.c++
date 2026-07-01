#include <iostream> 
using namespace std;
int main ()
{
int N;
cin >> N;

int A[N];

int start = 0 , lower = 0 , index = 0;

for ( int i = 0 ; i < N ; i++)
 {
    cin >> A[i];
 }

  for ( int i = 0 ; i < N ; i++)
   {
    if (start == 0)
       {
         lower = A[i];
       }

    if (lower > A[i])
    {
      lower = A[i];
      index = i;
    }
    start++;
    }
    cout << lower << " " << (index +1) ;

  return 0;
}