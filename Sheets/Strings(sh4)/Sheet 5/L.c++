#include <iostream>
using namespace std;
void newArray(int N , int A[] , int B[])
{
   for (int i = 0 ; i < N ; i++)
   {
    cout << B[i] << " ";
   }
   for (int i = 0 ; i < N ; i++)
   {
    cout << A[i] << " ";
   }

}
int main ()
{
  int N;
  cin >> N;
int A[N];
for (int i = 0 ; i < N ; i++)
{
  cin >> A[i];
}

int B[N];
for(int i = 0 ; i < N ; i++)
{
  cin >> B[i];
}

newArray(N,A,B);

   return 0;
}