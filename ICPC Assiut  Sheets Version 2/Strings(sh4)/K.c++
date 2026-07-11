  // I Love strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
     cin >> t;

      while (t--) {
        string s, n;
         cin >> s >> n;

          int mn = min(s.size(), n.size());

           for (int i = 0; i < mn; i++)
             cout << s[i] << n[i];

             for (int i = mn; i < s.size(); i++)
               cout << s[i];

                 for (int i = mn; i < n.size(); i++)
                   cout << n[i];

                  cout << endl;
    } 
}