#include <iostream>
#include <algorithm>
using namespace std;
bool ispalindrome(string Name)
{
 string rev = Name;
 reverse(rev.begin(),rev.end());
 return Name == rev;
}
string getBinary(int N)
{
  string Binary = "";
  while(N>0)
  {
    if(N%2)
    {
        Binary.push_back('1');
    }
    else 
    {
        Binary.push_back('0');
    }
    N/=2;
  }
 return Binary;
}
int main ()
{
  int N;
  cin >>N;

  if (N%2)
  {
    string Binary = getBinary(N);
   if (ispalindrome(Binary))
   {
    cout << "YES";
   }
   else 
   {
    cout << "NO";
   }
  }
  else 
  {
    cout << "NO";
  }

    return 0;
}