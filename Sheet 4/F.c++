#include <iostream>
using namespace std;
int main ()
{
  int T;
  cin >> T;

  int number; 

while (T--)
{

string Name;
cin >> Name;

if(Name.size() <= 10)
{
    cout << Name << "\n";
}
else 
{

number = Name.size() - 2;
cout << Name[0] << number << Name[Name.length()-1] << endl;

}

number = 0;
}

    return 0;
}