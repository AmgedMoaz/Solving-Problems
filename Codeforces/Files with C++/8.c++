#include <bits/stdc++.h>
using namespace std;
int main () {
   string word;
   int counter = 0;
    cin >> word;
for(int i = 0 ; i < word.size(); i++){
    for(int j = 0 ; j < word.size() ; j++) {
        if(word[i] != word[j] && i != j){
            continue;
        }
        if(word[i] == word[j] && i != j){
            break;
        }
        counter++;
    }
}
     if(counter % 2 == 0){
         cout << "CHAT WITH HER!";
       }else {    cout << "IGNORE HIM!";
        }
      return 0;
}