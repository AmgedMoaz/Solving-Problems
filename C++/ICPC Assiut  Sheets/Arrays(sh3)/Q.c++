#include <iostream>
using namespace std;
int main ()
{

int T;
cin >> T;

while (T--)
{
int N;
cin >> N;

int A[N];
int counter = 0;

for (int i = 0 ; i < N ; i++)
{
  cin >> A[i];
}

for (int i = 0 ; i < N ; i++)
{
    counter++;
  for(int j = i+1 ; j < N ; j++)
  {
    if (A[j] >= A[j-1])
     {
      counter++;
     }
    else
     {
       break;
     }
  }
}

cout << counter << endl;

}

    return 0;
}