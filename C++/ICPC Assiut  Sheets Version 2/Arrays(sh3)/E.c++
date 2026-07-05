 // Lowest Number
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n , x;
  cin >> n;

   long long arr[n] , check;
    for(int i = 0 ; i < n ; i++) {
      cin >> arr[i];
    }

     int i = 0;
      while(i <= n) {

        if(i == 0) {
          check = arr[i];
           x = i+1;
            i++;
             continue;
          }else if(check > arr[i]) {
             x = i+1;
              check = arr[i];
           }
            i++;

      }
          cout << check << " " <<  x;

    return 0;
}