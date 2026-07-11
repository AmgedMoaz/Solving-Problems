  // Conversion
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) {
          if (c == ',')
             c = ' ';
            else if (islower(c))
               c = toupper(c);
              else
               c = tolower(c);
     }
 
          cout << s;

    return 0;
}