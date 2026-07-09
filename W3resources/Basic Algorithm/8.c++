// Code a program to create a new string made of 4 copies of the first 2 characters of a given string. If the given string is less than 2 characters long, return the original string.
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