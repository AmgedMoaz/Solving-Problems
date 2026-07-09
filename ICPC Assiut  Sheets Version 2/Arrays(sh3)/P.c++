 // Minimize Number
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
    cin >> n;

     int arr[n];
      for(int i = 0 ; i < n ; i++) {
         cin >> arr[i];
      }

        int counter = 0;
         while(true) {
           
            for(int i = 0 ; i < n ; i++) {

             if(arr[i] % 2 == 0 ) {
               arr[i] = arr[i] / 2;
               }else {
                   cout << counter << "\n";
                   return 0;
                 }

            }

             counter++;
         } 
           cout << counter << "\n";

    return 0;
}