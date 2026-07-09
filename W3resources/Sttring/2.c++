// Code a program to replace Each Letter with the Next in the Alphabet
#include <iostream>
#include <string>
using namespace std;
int main(){
    string word = "w3resource";
    for (int i = 0 ; i < word.length() ; i++){
        if (word[i] == 'z'){
          word[i] = 'a';
        }
        else{
            word[i] = word[i] + 1;
        }
    }
    cout << word;
    return 0;
}