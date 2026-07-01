#include <iostream>
using namespace std;
int main ()
{
   int size;
   cin >> size;
   int maxPos = 0;
   int minPos = 0;
   int max = 0;
   int min = 101;
   for (int i = 1 ; i <= size ; i++)
   {
      int num;
      cin >> num;
      if ( num > max)
      {
        max = num;
        maxPos = i;
      }
      if (min >= num)
      {
        min = num;
        minPos = i;
      }
   }
   if (maxPos > minPos)
    cout << (maxPos - 1) + (size - ++minPos) << endl;
    else{
     cout << (maxPos - 1) + (size - minPos) << endl;
    }
    
    return 0;
}