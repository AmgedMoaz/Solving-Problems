#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
   string First , Second;
    cin >> First >> Second;

    int S1 = First.size();
    int S2 = Second.size();
   
  for (int i = 0 ; i < min(S1,S2) ; i++)
{
   if ( First[i] > Second[i])
   {
    cout << Second;
    return 0;
   }
   else if ( First[i] < Second[i])
   {
      cout << First; 
      return 0;
   }
}

if (S1 > S2)
{
    cout << Second;
}
else 
{
    cout << First;
}

    return 0;
}