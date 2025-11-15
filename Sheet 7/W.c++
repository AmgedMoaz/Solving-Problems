#include <iostream>
using namespace std;
long long Number;
bool reachValue(long long num)
{
    if (num > Number) 
    {
        return false;
    }
    else if (num == Number) 
    {
        return true;
    }
  else 
  {
      return reachValue(num * 10) || reachValue(num * 20);
  
  }
}
int main ()
{
  int T;
  cin >> T;

    while (T--)
     {
      cin >> Number;
      if (reachValue(1)) 
      {
        cout << "YES" << "\n";
      }
       else 
     { 
        cout << "NO" << endl;
     }
     }

    return 0;
}