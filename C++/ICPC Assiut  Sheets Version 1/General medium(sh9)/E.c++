#include <iostream>
using namespace std;
int main()
{
  string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", s2 , s3;
    char RL;
      cin >> RL >> s2;
       for (int i = 0 ; i < s2.size() ; i++)
        {
            int index = s1.find(s2[i]);
               if ( RL == 'R')
               {
                 s3 += s1[index - 1];
               }
               else if (RL == 'L')
               {
                s3 += s1[index + 1];
               }
        }
           cout << s3 << endl;

    return 0;
}