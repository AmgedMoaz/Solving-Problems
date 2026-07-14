  // Comparison
#include <bits/stdc++.h>
using namespace std;
 int main ()
{

  string s , sub1 , sub2;
   cin >> s;

    string Answer = s;

    int i = 0;
     while(i != s.size()) {
         
      sub1.push_back(s[i]);
      sub2 = s.substr(i+1,s.size()-1);

       sort(sub1.begin(),sub1.end());
       sort(sub2.begin(),sub2.end());
        Answer = min(Answer,sub1+sub2);
        i++;
     }
       cout << Answer;

    return 0;
}