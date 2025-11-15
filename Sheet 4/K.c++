#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int T;
  cin >> T;
 
  while (T--)
{

    string N , S;
   cin >> N >> S;
   int Name1 = N.size();
   int Name2 = S.size();

   for ( int i = 0 ; i < min(Name1,Name2) ; i++)
   {
   
      cout << N[i] << S[i];

   }
   for ( int i = min(Name1,Name2) ; i < max(Name1,Name2) ; i++)
   {
      if (Name1 == min(Name1,Name2))
      {
        cout << S[i];
      }
      else if (Name2 == min(Name1,Name2))
      {
        cout << N[i];
      }
   }
cout << endl;

}

    return 0;
}