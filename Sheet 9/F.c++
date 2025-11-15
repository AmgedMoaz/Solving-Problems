#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int st ,pu; 
   cin >> st >> pu;
    int A[pu];
     for (int i = 0 ; i < pu ; i++)
     {
        cin >> A[i];
     }
     sort(A,A+pu);
     long long result = A[st-1] - A[0];
      for (int i = 1 ; i <= pu - st ; i++)
      {
         if (A[i+st-1] - A[i] < result)
         {
           result = A[i+st-1] - A[i];
         }
      }
       cout << result << endl;

    return 0;
}