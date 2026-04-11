// Code a program to create a new string made of the last character of a given string, followed by the string, followed by the last character of the string again.
#include <iostream>
#include <string>
using namespace std;
string test(string word)
{
    // Extract the last character of the string
    string s = word.substr(word.length() - 1);

    // Append the last character both at the beginning and end of the string
    return s + word + s;
}
int main () {
    cout << test("Grey") << endl;
    cout << test("1") << endl;
    cout << test("amged") << endl;
   return 0;
}