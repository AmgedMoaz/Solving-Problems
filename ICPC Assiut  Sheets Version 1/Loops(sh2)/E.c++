#include <iostream>
using namespace std;
int main ()
{
int N , Max = 0;
long long X;
cin >> N;
for(int i = 1 ; i<=N ; i++)
{
    cin >> X;
if(X>Max)
{
    Max = X;
}
}

  cout << Max << endl;

   return 0;
}