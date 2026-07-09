#include <iostream>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;

  int Number = Name.size();

  for (int i = 1 ; i < Name.size() ; i++)
  {
    if( Name[i-1] == Name[Number - i])
   {
    continue;
   }
   else 
   {
     cout << "NO\n";
     return 0;
   }
  }
   cout << "YES" << endl;

    return 0;
}