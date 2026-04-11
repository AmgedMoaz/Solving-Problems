#include <bits/stdc++.h>
using namespace std;
int main () {
  int a , b;
  int Year = 0;
    cin >> a >> b;
    if (a == b) {
        cout  << 1 << "\n";
        return 0;
    }
    else if (a > b) {
        cout << 0 << "\n";
        return 0;
    }
    else {
        int diff = b-a;
         for (int i = 1 ; i <= diff ; i++)
          {  
            a *= 3;
            b *= 2;
            if (a > b ) {
                Year = i;
                break;
            }
          }
    }
    cout << Year << "\n";
    return 0;
}