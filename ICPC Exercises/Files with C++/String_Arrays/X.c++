// Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string phrase;
    getline(cin,phrase);

    set<char> arr;
    int counter = 0;
    for(int i = 0 ; i < phrase.size() ; i++) {
        if(isalpha(phrase[i])) {
            arr.insert(phrase[i]);
        }
    }
     counter = arr.size();
      cout << counter << endl;

    return 0;
}