#include <bits/stdc++.h>
using namespace std;
int main () {
    int n , b , d;
     cin >> n >> b >> d;
      int arr[n];
         for (int i = 0; i < n; i++) {
          cin >> arr[i];
         }
          int sum  = 0 , counter = 0;
             for (int i = 0 ; i < n ; i++){
                if (arr[i] <= b) {
                    sum += arr[i];
                }
                 if (sum > d) {
                    counter++;
                    sum = 0;
                }
             } 
              cout << counter << endl;
    return 0;
}