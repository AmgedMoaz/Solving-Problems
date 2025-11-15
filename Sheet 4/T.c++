#include <iostream>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;

  int Number = Name.size();
  for ( int i = 0 ; i < Number ; i++)
  {
    if (Name[i]  == '?')
    {
      i++;
      while (i < Number)
    {
        if (Name[i] == '=')
       {
        cout <<": ";
       }
       else if (Name[i] == '&')
      {
        cout << endl;
      }  
      else 
      {
        cout << Name[i];
      }
      i++;
    }
       break;
    }


      
  }

    return 0;
}