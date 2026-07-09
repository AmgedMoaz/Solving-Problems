 // PUM
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin >> n;

   int x = 1 , index;
    for(int i = 1 ; i <= n ; i++) {

       index = x;
        for(int j = x ; j < (index+3) ; j++,x++) {
          cout << x << " ";
        }
        x++;
         cout << "PUM" << endl;
         
    }
     
    return 0;
}