 // Max Subarray
#include <bits/stdc++.h>
using namespace std;

int main() {

  int t , n , sum = 0;
  cin >> t;

   while(t--) {

     cin >> n;
       long long arr[n] , Max;
        for(int i = 0 ; i < n ; i++) {
           cin >> arr[i];
        }
     
         for(int i = 0 ; i < n ; i++) {

            Max = INT_MIN;
             for(int j = i ; j < n ; j++) {
                Max = max(Max , arr[j]);
                 cout << Max << " ";
             }

          }
            
            cout << endl;
           
   }

    return 0;
}