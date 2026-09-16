// Anton and Danik

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    string row; cin >> row;

    int a = 0 , d = 0;
    for(int i = 0 ; i < n ; i++) {
        if(row[i] == 'A') {
            a++;
        }else {
            d++;
        }
    }

    if(a > d) {
        cout << "Anton" << "\n";
    }else if(a < d) {
        cout << "Danik" << endl;
    }else {
        cout << "Friendship" << endl;
    }

    return 0;
}