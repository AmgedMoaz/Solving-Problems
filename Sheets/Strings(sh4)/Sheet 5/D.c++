#include <iostream>
using namespace std;
bool isPrime(int N)
{
if (N<=1) return false;
if (N==2) return true;

if (N%2==0) return false;
for (int i = 3 ;i*i<=N ;i+=2) 
{
  if (N%i==0) return false;
}
  return true;
}
int main ()
{
    int T;
    cin >> T;
    while(T--)
    {
     int Number;
     cin >> Number;

     if(isPrime(Number))
     {
        cout << "YES\n";
     }
     else
     {
        cout << "NO\n";
     }
    }
    return 0;
}