#include <iostream>
using namespace std;
int main ()
{
   int size ;
   cin >> size;
   int flage = 0;
   int temp = 0;
   int flag = 0;
   for (int i = 0 ; i < size ;i++)
   {
      int size1 , size2;
      cin >> size1 >> size2;
      if (size1 != size2)
      {
        flage = 1;
        break;
      }
      if (temp < size1 && i != 0)
      {
        flag = 1;
      }
      temp = size1;

   }
     if (flage == 1)   cout << "rated";
     else if (flag == 1)  cout << "unrated";
     else cout << "maybe";

    return 0;
}