#include <iostream>
using namespace std;
int main ()
{
  string Text;
  getline(cin,Text);

for(int i = 0 ; i < Text.length() ; i++)
{
  if (Text[i]=='\\')
{
  break;
}

   cout << Text[i];
}

    return 0;
}