// Dima and Friends

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n;
    cin >> n;

    short total_fingers = 0;
    for(int i = 0 ; i < n ; i++) {
        short x;
        cin >> x;
        total_fingers += x;
    }

    short counter = 0;
    short total_friends = n+1;

    for(int current_finger = 1 ; current_finger <= 5 ; current_finger++) {
        short current_total = current_finger + total_fingers;

        short check = (current_total-1) % total_friends + 1;

        if(check != 1) {
            counter++;
        }
    }
      cout << counter << "\n";

    return 0;
}