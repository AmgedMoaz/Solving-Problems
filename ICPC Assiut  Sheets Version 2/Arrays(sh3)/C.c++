 // Replacement
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

   long long arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

     int i = 0;
      while(i != n) {

        if(arr[i] == 0) {
            i++;
            continue;
          }else if(arr[i] > 0) {
            arr[i] = 1;
           }else {
               arr[i] = 2;
             }
              i++;

      }
           for(int i = 0 ; i < n ; i++) {
               cout << arr[i] << " ";
             }
       
    return 0;
}