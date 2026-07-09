 // Searching
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

   int arr[n];

    for(int i = 0 ; i < n ; i++) {
       cin >> arr[i];
    }

     int x;
      cin >> x;

       int i = 0;
        while(i != n) {

          if(arr[i] == x) {
            cout << i << endl;
             return 0;
          }
           i++;

        }

           cout << -1;

    return 0;
}