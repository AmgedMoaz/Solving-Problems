 // Permutation with arrays
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
     bool check = false;

     int arr1[n] , arr2[n];
      for(int i = 0 ; i < n ; i++) {
        cin >> arr1[i];
      }
        for(int i = 0 ; i < n ; i++) {
          cin >> arr2[i];
        }

 
           sort(arr1, arr1 + n);
           sort(arr2, arr2 + n);

            bool ok = true;

             for (int i = 0; i < n; i++) {
               if (arr1[i] != arr2[i]) {
                 ok = false;
                  break;
                }
            }

              if (ok)
               cout << "yes";
                else
                 cout << "no";

    return 0;
}