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