#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int size , sum = 0;
   cin >> size;
    int A[size];
     if (size == 1)
     {
        cout << 1 << endl;
        return 0;
     }
      for(int i = 0 ; i < size ; i++)
      {
        int value;
         cin >> value;
          A[i] = value;
           sum += value;
      }
       int n = sizeof(A)/sizeof(A[0]);
        sort(A,A+n);
         int result = sum / 2;
         int counter = 0;
         int myresult = 0;

           for(int i = size-1 ; i >= 0 ; i--)
           {
              myresult += A[i];
               counter++;
                if (myresult > result)
                {
                    break;
                }
           }
             cout << counter << endl;

    return 0;
}