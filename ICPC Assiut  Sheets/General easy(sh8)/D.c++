#include <iostream>
using namespace std;
int main ()
{
int A , B;
cin >> A >> B;
int weight1 = 0 , weight2 = 0;
int count = 0;
weight1 = A*3;
weight2 = B*2;
for (int i = 0 ; i < 10 ; i++)
{
  count++;
  if (weight1 > weight2)
  {
    cout << count;
    return 0;
  }
 weight1*=3;
 weight2*=2;
}
   
   return 0;
}