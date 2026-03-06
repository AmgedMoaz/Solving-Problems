// Code a program to capitalize the First Letter of Each Word
#include <iostream>
#include <string>
using namespace std;
int main(){
    string word = "cpp string exercises";
    for (int i = 0 ; i < word.length() ; i++){
        if (i == 0 ){
            word[i] = word[i] - 32;
        }
        else if (word[i] == ' '){
            word[i+1] = word[i+1] - 32;
        }
    }
    cout << word;
    return 0;
}