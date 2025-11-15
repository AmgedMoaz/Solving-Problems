#include <iostream>
using namespace std;
int main ()
{
   int Number;
   cin >> Number;

   string Name;
   cin >> Name;\

   int counter = 0;

  for (int i = 1 ; i <= Number ; i++)
  {
    if (Name[i-1] == Name[i])
    {
        continue;
    }
    else 
    {
        counter++;
    }
  }
    cout << counter;

    return 0;
}