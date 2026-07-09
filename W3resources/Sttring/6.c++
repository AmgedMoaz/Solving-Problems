// Code a program to Check Separation of 'e' and 'g' by Exactly 2 Characters
#include <iostream>
#include <string>
using namespace std;
bool isFound(string w){
    for(int i = 0 ; i < w.length(); i++)
     {
        if (w[i] == 'e' && w[i+2] == 'g' )
         return true;
     }
        return false;
}
int main () {
    string word = "eagerer";
    cout << isFound(word) << endl;
    return 0;
}