 // Max
#include <bits/stdc++.h>
using namespace std;
int main() {

  int n , x , max = 0;
  cin >> n;

  for(int i = 1 ; i <= n ; i++) {

    cin >> x;

      if(max < x) {
        max = x;
      }
  }

   cout << max;

    return 0;
}