  // Mathematical Expression
#include <bits/stdc++.h>
using namespace std;
int main() {

  int a , b;
  long long c , Result = 0;
  char s , q ;
  cin >> a >> s >> b >> q >> c;

  if(s == '+') {
    Result = a + b;
  }else if(s == '-') {
    Result = a - b;
  }else if(s == '*') {
    Result = a * b;
  }

   if(c == Result) {
    cout << "Yes" << endl;
   }else {
    cout << Result << endl;
   }

    return 0;
}