#include <iostream>
using namespace std;
int main ()
{
  int size;
  cin >> size;
  int count = 0;
  for(int i = 1 ; i <= size ; i++)
   {
      int num1 , num2;
      cin >> num1 >> num2;
      if (num2 - num1 >= 2)
      {
        count++;
      }
   }
   cout << count << endl;

    return 0;
}