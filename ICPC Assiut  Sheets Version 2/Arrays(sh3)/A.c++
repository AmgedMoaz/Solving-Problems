 // Summation
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin >> n;

    long long arr[n] , sum = 0;
     int i = 0;
      while(i != n) {

        cin >> arr[i];
         sum += arr[i];
          i++;
          
      }

       (sum >= 0)? cout << sum << endl : cout << (0 - sum);

    return 0;
}