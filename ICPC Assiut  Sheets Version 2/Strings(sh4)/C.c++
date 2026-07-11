  // Compare
#include <bits/stdc++.h>
using namespace std;
 int main() {
 
    string x , y;
     cin >> x >> y;

      int size1 = x.size();
      int size2 = y.size();

       for(int i = 0 ; i < min(size1,size2) ; i++) {
         
         if(x[i] > y[i]) {
            cout << y;
             return 0;
          }else if(x[i] < y[i]) {
               cout << x;
                return 0;
             }

       }

        (size1 > size2) ? cout << y : cout << x;

     return 0;
  }