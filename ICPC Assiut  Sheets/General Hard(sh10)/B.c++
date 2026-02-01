#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string word1 , word2;
    cin >> word1 >> word2;
     int n1 , n2;
      n1 = word1.size();
       n2 = word2.size();
        int e1 = n1-1;
         int e2 = n2-1;
        int counter = 0;
         while (e1 >= 0 && e2 >= 0 && word1[e1] == word2[e2])
          {
               e1--;
               e2--;
               counter++;
          }
      cout << (n1-counter) + (n2-counter) << endl;


    return 0;
}