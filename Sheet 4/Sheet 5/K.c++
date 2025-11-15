#include <iostream>
using namespace std;
void getShiftRight(int N , int Array[] , int shifts)
{
  for (int i = N-shifts; i < N ; i++)
  {
    cout << Array[i] << " ";
  }
  for (int i = 0; i < N-shifts ; i++)
  {
    cout << Array[i] << " ";
  }
}
int main ()
{
   int N , shifts;
   cin >> N >> shifts;

   int Array[N];
   for(int i = 0 ; i < N ; i++)
   {
    cin >> Array[i];
   }

   shifts %= N;

   getShiftRight(N,Array,shifts);

    return 0;
}