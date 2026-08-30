#include <bits/stdc++.h>
using namespace std;
int main () {
  int n , m;
  int a;
  int sum = 0;
    cin >> n >> m;

     for (int i = 0 ; i < n; i++)
      {
       cin >> a;
      if (a <= m)
      {
        sum += 1;
      }
      else
      {
        sum += 2;
      }
      }

    cout << sum << endl;
    return 0;
}