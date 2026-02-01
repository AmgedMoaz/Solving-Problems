#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string Name;
  cin >> Name;

int Sum = 0;
for (int i = 0 ; i < Name.size() ; i++)
{
 Sum += Name[i]-'0';
}
 cout << Sum;

    return 0;
}