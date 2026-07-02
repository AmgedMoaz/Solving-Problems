  // Float or int
#include <bits/stdc++.h>
using namespace std;
int main() {

  double X , N;
  cin >> X;
 
    N = X - (int)X;
    if(N == 0)  {
      cout << "int " << (int)X << endl;
    }
    else {
      cout << "float " << (int)X << " " << N << endl;
    }

    return 0;
}