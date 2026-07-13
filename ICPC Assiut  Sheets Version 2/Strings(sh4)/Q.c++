  // Reverse Words
#include <bits/stdc++.h>
using namespace std;
 int main() {
  
   string s;
    getline(cin,s);
     
     int i = 0 , index = 0;
      while(i < s.size()) {
       
        if(s[i] == ' ') {
         reverse(s.begin()+index,s.begin()+i);
          index = i+1;
         }else if(i == s.size()-1) {
                reverse(s.begin()+index,s.begin()+ (i+1) );
              }
      
        i++;
      }
        cout << s;

    return 0;
}