  // Replace Word
#include <bits/stdc++.h>
using namespace std;
 int main ()
{

  string s;
   cin >> s;

    int i = 0 ;
     while(i != s.size()){

       if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T') {
          cout << " ";
          i += 5;
          continue;
       }
        cout << s[i];
         i++;
     }

    return 0;
}