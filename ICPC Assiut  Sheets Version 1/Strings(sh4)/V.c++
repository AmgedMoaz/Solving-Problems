#include <iostream>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;
  string egypt = "EGYPT";
  int Number = Name.size();

  for ( int i = 0 ; i < Number ; i++)
  {
    int index = 0;
    int X = i;
    for (index = 0 ; index < 5 && X < Number ; index++,X++)
    {
      if (Name[X] != egypt[index] )
      {
        break;
      }
    }


    if (index == 5)
    {
      cout << " ";
      i+=4;
    }
    else 
    {
        cout << Name[i];
    }
  }

    return 0;
}