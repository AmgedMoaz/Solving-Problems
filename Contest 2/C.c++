#include <iostream>
using namespace std;
int main ()
{
long long N;
cin >> N;

int K;
cin >> K;

int X; 
int start = 1;
int min;
int counter = 0;
for (int i = 0 ; i < N ; i++)
  {
    cin >> X;
if (start)
{
min = X;
start = 0;
}
else
{
   if (min > X)
  { 
     min = X;
  }
}
counter++;
if (counter == K || i == N-1)
      {
    cout << min << " ";
    counter = 0;
    start = 1;
      }
  }


    return 0;
}