// Casimir's String Solitaire

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;
    cin >> t;

    while(t--) {
        int a = 0 , b = 0 , c = 0;
            string phrase;
            cin >> phrase;
            for(int i = 0 ; i < phrase.length() ; i++) {
                if(phrase[i] == 'A') {
                    a++;
                }else if(phrase[i] == 'B') {
                    b++;
                }else {
                    c++;
                }
            }
        (b == (a+c))? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}