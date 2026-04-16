#include <bits/stdc++.h>
using namespace std;
int main () {
   int arr[4] , count = 0;
    for (int i = 0; i < 4; i++) 
        cin >> arr[i];
    string word;
     cin >> word;
     for(int i = 0 ; i < word.size(); i++){
         if(word[i] == '1')
            count += arr[0];
        else if(word[i] == '2')
            count += arr[1];
        else if(word[i] == '3')
            count += arr[2];
        else if(word[i] == '4')
            count += arr[3];
     }
        cout << count << endl;
    return 0;
}