  // Strings
#include <bits/stdc++.h>
using namespace std;
 int main() {
 
  string a , b;
   cin >> a >> b;

    cout << a.size() << " " << b.length() << endl;

     string s = a+b;
      cout << s << "\n";

       swap(a[0],b[0]);
        cout << a << " " << b;  

     return 0;
  }