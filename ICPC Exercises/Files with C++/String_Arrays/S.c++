// Erasing Zeroes

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;
    cin >> t;

    while(t--) {
        string row;   cin >> row;
        int counter = 0;
        int oneBegin = -1 , oneEnd = -1;

        for(int i = 0 ; i < row.size() ; i++){ 
            if(row[i] == '1') {

                if(oneBegin == -1) {
                    oneBegin = i;
                }

                oneEnd = i;
            }
        }
        for(int i = oneBegin ; i < oneEnd ; i++) {
            if(row[i] == '0') {
                counter++;
            }
        }
            cout << counter << "\n";
    }

    return 0;
}