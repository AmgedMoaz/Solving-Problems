#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
     cin >> n;
      int arr1[n] , arr2[n];
    for (int i = 1 ; i <= n ; i++) {
         cin >> arr1[i];
     }
        for (int i = 1 ; i <= n ; i++) {
             arr2[arr1[i]] = i;
        }
           for (int i = 1 ; i <= n ; i++) {
               cout << arr2[i] << " ";
            }
    return 0;
}