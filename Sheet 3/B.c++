#include <iostream>
using namespace std;
int main ()
{
int N , X;
cin >> N;
 
int array[N];

for (int i = 0 ; i < N ; i++)
  {
   cin >> array[i];
  }
  cin >> X;
  for ( int i = 0 ; i < N ; i++)
    {
      if ( array[i] == X)
     {

      cout << i << endl;
      return 0;

     }

    }
  
    cout << -1 << endl;
   return 0;
}