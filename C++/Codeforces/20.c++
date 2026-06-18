#include <bits/stdc++.h>
using namespace std;
 int main () {
  int Y , W;
  cin >> Y >> W;
    int M = max(Y,W);
     int N = 6 - M + 1;
    int GCD = __gcd(N,6);
    cout << N/GCD << "/" << 6/GCD << endl;
    return 0;
 }