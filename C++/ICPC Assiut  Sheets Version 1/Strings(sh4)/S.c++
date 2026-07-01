#include <iostream>
using namespace std;

int main()
{
    string Name;
    cin >> Name;
    string Array[1000];
    int index = 0;
    int Number = Name.size();
    int l = 0 , r= 0;

    string ans = "";

  for ( int i = 0 ; i < Number ; i++)
  {
  if (Name[i] == 'L')
  l++;
  else 
  r++;
 
 ans.push_back(Name[i]);
if (l==r)
{
  Array[index] = ans;
  ans.clear();
  index++;
  l = 0 , r = 0;
}
  }
  cout << index << "\n";
  for ( int i = 0 ; i < index ; i ++)
  cout << Array[i] << "\n";


    return 0;
}