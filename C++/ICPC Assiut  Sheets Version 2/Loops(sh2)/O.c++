 // Pyramid
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

      for(int i = 1 ; i <= n ; i++) {
       
        int x = 1;
         while(x <= i) {
           
            cout << '*';
            x++;
            
          }
          cout << "\n";

      }
 
    return 0;
}