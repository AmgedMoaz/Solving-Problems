 // Lucky Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a , b , x , counter = 0;
    bool check = true;
    cin >> a >> b;
 
     int i = a;
      while(i <= b) {
        
       check = true;
        x = i;
         while (x > 0) {

          if(x % 10 == 4 || x % 10 == 7) {
             check = true;
           }else {
               check = false;
               break;
             }
                 x /= 10;

               }

                   if(check) {
                    cout << i << " ";
                     counter++;
                    }
                     i++;

          }

              if(counter == 0) {
                  cout << -1;
                }
 
    return 0;
}