// I_love_\%username\%

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n;
    cin >> n;

    int max = 0 , min = 0 , counter = 0;

    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;

        if(i == 0) {
            max = x , min  = x;
        }else {
            if(max < x) {
                counter++;
                max = x;
            }
            if(min > x) {
                counter++;
                min = x;
            }
        }
    }
         cout << counter << endl;

    return 0;
}