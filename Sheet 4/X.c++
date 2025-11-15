#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
   string Name;
   cin >> Name;
   string Answer = Name;
   string sub1 , sub2; 

   int Number = Name.size();

  for (int i = 0 ; i < Number-1 ; i++)
  {
   sub1.push_back(Name[i]);
   sub2 = Name.substr(i+1,Number-1);

   sort(sub1.begin(),sub1.end());
   sort(sub2.begin(),sub2.end());
   Answer = min(Answer,sub1+sub2);

  }

     cout << Answer;
    
    return 0;
}