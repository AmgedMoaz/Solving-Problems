#include <iostream>
using namespace std;
int main ()
{
    string Name;
    string Hello = "hello";
    int index = 0;

cin >> Name;
int Number = Name.size();

for (int i = 0 ; i < Number && index < 5 ; i++)
{
   if ( Name[i] == Hello[index])
   {
      index++;
   }
}

if (index == 5)
{
    cout << "YES";
}
else 
{
    cout << "NO";
}
    return 0;
}