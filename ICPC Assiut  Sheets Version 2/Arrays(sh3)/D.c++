 // Positions in array
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

         if(arr[i] <= 10) {
            cout << "A[" << i << "]" << " = " << arr[i] << endl;
          }
           i++;

      }

    return 0;
}