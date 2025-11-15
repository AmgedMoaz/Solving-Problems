#include <iostream>
using  namespace std;
int main ()
{
int N;
cin >> N;
int result = 0;
long long X;
for (int i = 0 ; i < N ; i++)
 {
    int counter = 0;
   cin >> X;

  if (X%2!=0)
   {
     counter = 0;
   } 
  else 
  {
   while (X>0)
     {
     if (X%2!=0)
     {
     break;
     }
    else 
    {

    counter++;
    X/=2;

    }

     }
     if (counter > result)
     {
        result = counter;
     }
  }
 }
   cout << result << endl;
    return 0;
}