// Code a program to sort Letters in a string
#include <iostream>
#include <string>
using namespace std;
int main () {
    string word = "python";
     for(int i = 0 ; i < word.size() ; i++){
        for(int j = i + 1 ; j < word.size() ; j++){
            if(word[i] > word[j]){
                swap(word[i],word[j]);
            }
        }
     }
    cout << "Sorted string: " << word << endl;
return 0;
}