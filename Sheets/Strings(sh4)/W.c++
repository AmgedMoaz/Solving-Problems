#include <iostream>
using namespace std;
int main ()
{
  int Q;
  cin >> Q;
  string Name;
  cin >> Name;
  string Original =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  int Number = Name.size();
   if ( Q  == 1)
   {
    for (int i = 0 ; i < Number ; i++)
     {
      for (int j = 0 ; j < Original.size() ; j++)
      {
          if (Name[i] == Original[j])
           {
              cout << Key[j];
              break;
           }
      }
     }
   }
   else if ( Q == 2 )
  {
      for (int i = 0 ; i < Number ; i++)
      {
    for (int j = 0 ; j < Key.size() ; j++)
    {
        if (Name[i] == Key[j])
        {
            cout << Original[j];
            break;
        }
    }
      }
  }
  
    return 0;
}