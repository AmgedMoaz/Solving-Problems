#include <iostream>
#include <string>
using namespace std;
string func(string word)
{
    if (word.length() < 2 )
    {
        return word;
    }
    else {
     word = word.substr(0,2) + word.substr(0,2) + word.substr(0,2) + word.substr(0,2);
    }
    return word;
}
int main () {
  cout << func("w3resource") << "\n";
  cout << func("a") << "\n";
  cout << func("C sharp") << "\n";
   return 0;
}