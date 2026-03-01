#include <iostream>
#include <string>
using namespace std;
string swap(string word)
{
    swap (word[0], word[word.length() - 1]);
    return word;
}
int main () {
 cout << swap("Python") << endl;
 cout << swap("a") << endl;
 cout << swap("XY") << endl;
   return 0;
}