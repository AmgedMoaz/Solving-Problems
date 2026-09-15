// Colourblindness

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;
    cin >> t;

    while(t--) {
        short n;
        cin >> n;

        string row1 , row2;
        cin >> row1 >> row2;

        bool check = true;

        // استبدال جميع الحروف 'B' بـ 'G' في كلا النصين
        replace(row1.begin(), row1.end(), 'B', 'G');
        replace(row2.begin(), row2.end(), 'B', 'G');

        for(int i = 0 ; i < n ; i++) {
            if(row1[i] != row2[i]) {
                check = false;
            }
        }

        if(check)
           cout << "YES" << endl;
        else
           cout << "NO" << endl;

    }

    return 0;
}