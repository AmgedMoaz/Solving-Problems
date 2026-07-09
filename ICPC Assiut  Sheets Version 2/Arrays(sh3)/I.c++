 //  Smallest Pair
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n , t;
  cin >> t;

   while(t--) {

     cin >> n;
       long long arr[n] , Min_Sum = 0;
        for(int i = 0 ; i < n ; i++) {
          cin >> arr[i];
        }

        for(int i = 0 ; i < n ; i++) {

            for(int j = i+1 ; j < n ; j++) {

             long long operation = arr[i] + arr[j] + (j-i);
               if(i == 0 && j == 1) {
                 Min_Sum = operation;
               }else {
                 Min_Sum = min(operation,Min_Sum);
               }

            }

        }
         cout << Min_Sum << "\n";

   }
     
    return 0;
}