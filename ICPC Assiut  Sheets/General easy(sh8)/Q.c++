#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
   string word;
   cin >> word;
   int start = 97;
   int steps = 0;
   for (int i = 0 ; i < word.size() ; i++)
   {
     int res = abs(word[i] - start);
     if (res <= 13)
     {
       steps += res;
     }
     else{
        steps += (26 - res);
     }
     start = word[i];
   }
      cout << steps << endl;

    return 0;
}