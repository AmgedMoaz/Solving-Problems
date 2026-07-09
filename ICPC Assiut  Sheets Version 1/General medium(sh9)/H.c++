#include <iostream>
using namespace std;
int main()
{
  int size;
    string sq;
      cin >> size >> sq;
       long long A[size];
         for (int i = 0 ; i < size ;i++) cin >> A[i];
          long long time = 0 , minTime = 100000000000;
           for (int i = 0 ; i < size-1 ;i++)
            {
               if (sq[i] == 'R' & sq[i+1] == 'L')
                {
                  time = (A[i+1] - A[i])/2;
                   if (time < minTime) minTime = time;
                }
            }
             if (minTime == 100000000000)
              {
                cout << -1 << "\n";
              }
               else 
                {
                  cout << minTime << endl;
                }

    return 0;
}