#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string word1 , word2;
    cin >> word1 >> word2;
     if (word1.size() != word2.size())
       {
         cout << "NO\n";
         return 0;
       }
        vector <int> diff;
         for (int i = 0 ; i < word1.size() ; i++)
          {
            if (word1[i] != word2[i]) diff.push_back(i);
          }
           if (diff.size() == 2)
           {
             int i = diff[0] , j = diff[1];
             if (word1[i] == word2[j] && word1[j] == word2[i])
              {
                cout << "YES" << endl;
              }
              else{
                cout << "NO\n";
              }
           }
            else if (diff.size() == 0) {
            // نتحقق هل يوجد حرف مكرر في A
               vector<int> cnt(26, 0);
                 for (char c : word1) if (++cnt[c - 'a'] > 1) { cout << "YES\n"; return 0; }
                   cout << "NO\n";
               }
           else{
            cout << "NO\n";
           }

    return 0;
}