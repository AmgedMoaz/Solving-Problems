  // Encrypt & Decrypt Message
#include <bits/stdc++.h>
using namespace std;
 int main ()
{

  string Origin = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

   int q;
    cin >> q;

     string s;
      cin >> s;

      int i = 0;
       while(i != s.length()) {

          if(q == 1){
            int index = Origin.find(s[i]);
             cout << Key[index];
           }else if(q == 2) {
               int index = Key.find(s[i]);
                cout << Origin[index];
            }
              i++;

      }

    return 0;
}