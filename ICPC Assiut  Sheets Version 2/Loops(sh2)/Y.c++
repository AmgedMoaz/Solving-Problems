 // Easy Fibonacci
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n , start = 0 , end = 1 , final = 0;
    cin >> n;

     if(n == 1) {
        cout << 0;
          return 0;
         } else {

               cout << start << " " << end << " ";
                 for(int i = 3 ; i <= n ; i++) {

                   final = start + end;
                    cout << final << " ";
                     start = end;
                      end = final;

                 }

           }
    
    return 0;
}