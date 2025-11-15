#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;
for(int i = 2 ; i < N ; i++)
{
if(N%i==0)
{
cout << "NO";
  return 0;
} 
}
cout << "YES";

  return 0;
}