 // Permutation with arrays
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , m;
    cin >> n;
    cin >> m ;

     int arr[n][m];
      
      for(int i = 0 ; i < n ; i++) {
       for(int j = 0 ; j < m ; j++) {
         cin >> arr[i][j];
       }
      }

        int x;
         cin >> x;

         if(x == 0) {
           cout << "will take number";
            return 0;
         }else {
            for(int i = 0 ; i < n ; i++) {
                for(int j = 0 ; j < m ; j++){
                  if( arr[i][j] == x) {
                     cout << "will not take number";
                      return 0;
                  }
                }
            }
         }
           cout << "will take number";

    return 0;
}