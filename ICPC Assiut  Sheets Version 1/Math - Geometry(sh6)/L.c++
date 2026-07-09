#include <iostream>
using namespace std;
int main ()
{
   int N;
   cin >> N;

   int Value;
  for (int i = 0 ; i < N ;i++)
  {
    Value = 1;
     for (int j = 0 ; j <= i ;j++)
     {
       cout << Value << " ";
       Value = Value *(i - j) / (j + 1);
     }
     cout << endl;
  }

    return 0;
}