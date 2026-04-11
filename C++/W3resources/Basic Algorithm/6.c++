// Code a program to remove a character at the specified position in a given string and return the new string.
#include <iostream>
using namespace std;
string func(string word , int index)
{
    if (index < word.length())
    {
       word.erase(index, 1);
       return word;
    }
    else
    {
        return "Index is out of range.";
    }
   
}
int main () {
    cout << func("w3resource", 0) << "\n";
    cout << func("w3resource", 1) << "\n";
    cout << func("w3resource", 11) << "\n";
   return 0;
}