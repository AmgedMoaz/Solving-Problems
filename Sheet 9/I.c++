#include <iostream>
using namespace std;
int main()
{
   long long size , maxx , minn;
    cin >> size;
     long long A[size];
      for (int i = 0 ; i < size ; i++)
       {
        cin >> A[i];
       }
        for (int i = 0 ; i < size ; i++)
        {
            if (i == 0)
            {
               minn = abs(A[i] - A[i+1]);
               maxx = abs(A[i] - A[size-1]); 
            }
             else if(i == size-1)
             {
                minn = abs(A[i] - A[i-1]);
                maxx = abs(A[i] - A[0]);
             }
              else
              {
                minn = min(abs(A[i] - A[i-1]) , abs(A[i] - A[i+1]));
                maxx = max(abs(A[i] - A[0]) , abs(A[i] - A[size-1]));
              }
              cout << minn << " "<< maxx << endl;
        }

    return 0;
}