#include <iostream>
using namespace std;
int main()
{
  int size , sizekill , boxNum , ps;
   cin >> size;
    int A[size];
     for (int i = 0 ; i < size ; i++)
     {
         cin >> A[i];
     }
      cin >> sizekill;
       for (int i = 0 ; i < sizekill ; i++)
        {
          cin >> boxNum >> ps;
          A[boxNum - 2] += ps - 1;
          A[boxNum ] += A[boxNum-1] - ps;
          A[boxNum-1] = 0;
        }
          for (int i = 0 ; i < size ; i++)
           {
             cout << A[i] << "\n";
           }

    return 0;
}