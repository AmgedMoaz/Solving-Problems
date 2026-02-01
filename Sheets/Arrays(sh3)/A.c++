#include <iostream>
using namespace std;
int main ()
{
long long N , Sum = 0;
cin >> N;
long long A[N];
for (int i = 0 ; i < N ; i++)
  {
     
   cin >> A[i];

  Sum += A[i];


  }

   if (Sum > 0 )
   {

    cout << Sum;

   }
   else 
   {

    cout << (0-Sum);

   }


    return 0;
  }
