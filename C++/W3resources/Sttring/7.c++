// Code a program to count the number of vowels in a string.
#include <iostream>
#include <string>
using namespace std;
 int countVowels(string w)
 {
    int counter = 0;
    for(int i = 0 ; i < w.length() ; i++)
    {
          if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u' || w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U')
          {
              counter++;
          }
    }
    return counter;
 } 
int main () {
    string word = "eagerer";
    cout << countVowels(word) << endl;
    return 0;
}