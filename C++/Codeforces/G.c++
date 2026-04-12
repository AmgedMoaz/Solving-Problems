#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string word1 , word2;
    cin >> word1 >> word2;
     transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
        transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
         if(word1 < word2)
          {
            cout << "-1";
          }
         else if(word1 > word2)
          {
            cout << "1";
          }
         else
          {
            cout << "0";
          }
      return 0;
}