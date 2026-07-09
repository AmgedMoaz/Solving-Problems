 // Shape1
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

     for(int i = n ; i >= 1 ; i-- ) {

        int x = i;
         while(x >= 1) {

           cout << '*';
            x--;

         }
          cout << endl;

     }

    return 0;
}