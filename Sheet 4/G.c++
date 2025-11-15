#include <iostream>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;

for (int i = 0 ; i < Name.size() ; i++)
{
   
if ( Name[i] == ',')
{
    Name[i] = ' ';
}
else if (Name[i] >= 'a' && Name[i] <= 'z')
{
  Name[i] -= 32;
}
else if (Name[i] >= 'A' && Name[i] <= 'Z')
{
  Name[i] += 32;
}
else
{
    break;
}
}
   cout << Name << "\n";

    return 0;
}