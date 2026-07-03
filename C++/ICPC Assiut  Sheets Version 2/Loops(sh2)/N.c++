 // Numbers Histogram
#include <bits/stdc++.h>
using namespace std;

int main() {

   char s;
   int n , x;
    cin >> s >> n;

      for(int i = 1 ; i <= n ; i++) {

       cin >> x;
        int j = 1;
         while(j <= x) {

           cout << s;
           j++;

         }  
        cout << endl;
      }
 
    return 0;
}