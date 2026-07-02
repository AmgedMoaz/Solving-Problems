  // Sort Numbers
#include <bits/stdc++.h>
using namespace std;
int main() {

long long a , b , c;
long long n1 , n2 , n3;
cin >> a >> b >> c;

  if(a <= b && a <= c ) {
    n1 = a;
    if(b <=c) {
      n2 = b;
      n3 = c;
    }
    else {
      n2 = c;
      n3 = b;
    }
  }else if(b <= a && b <= c) {
    n1 = b;
    if(a <= c) {
      n2 = a;
      n3 = c;
    }
    else {
      n2 = c;
      n3 = a;
    }
  }else {
    n1 = c;
    if(a <= b) {
      n2 = a;
      n3 = b;
    }
    else {
      n2 = b;
      n3 = a;
    }
  }

  cout << n1 << "\n" << n2 << "\n" << n3 << endl;
  cout << "\n" << a << "\n" << b << "\n" << c << endl;

    return 0;
}