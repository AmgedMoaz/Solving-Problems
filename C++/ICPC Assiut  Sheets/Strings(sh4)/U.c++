#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;

  int Number = Name.size();

  int E = 0, G = 0, Y = 0, P = 0, T = 0;
  
  for (int i = 0 ; i < Number ; i++)
 {
  if ( Name[i] == 'e' || Name[i] == 'E') 
  {
    E++;
  }
  else if ( Name[i] == 'g' || Name[i] == 'G') 
  {
    G++;
  }
   else if ( Name[i] == 'y' || Name[i] == 'Y') 
  {
    Y++;
  }
   else if ( Name[i] == 'p' || Name[i] == 'P') 
  {
    P++;
  }
   else if ( Name[i] == 't' || Name[i] == 'T') 
  {
    T++;
  }
 }

  cout << min({E,G,Y,P,T});

    return 0;
}