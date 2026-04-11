// Code a program to find the Largest Word in a String
#include <iostream>
#include <string>
using namespace std;
int main(){
    string word = "C++ is a general-purpose programming language";
    string largest = "";
    string current = "";
    for (int i = 0 ; i < word.length() ; i++){
        if (word[i] == ' '){
            if (current.length() > largest.length()){
                largest = current;
            }
            current = "";
        }
        else{
            current += word[i];
        }
    }
    if (current.length() > largest.length()){
        largest = current;
    }
    cout << largest;

    return 0;
}