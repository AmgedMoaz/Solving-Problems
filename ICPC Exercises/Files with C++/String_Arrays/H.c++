// Flag

#include <bits/stdc++.h>
using namespace std;

int main() {

    short n , m;
    cin >> n >> m;

    char last = ' ';
    for(int i = 0 ; i < n ; i++) {
        string row;
        cin >> row;

        char c = row[0];
        if(i != 0 and last == c) {
            cout << "NO" << endl;
            return 0;
        }
        last = c;
        for(int j = 1 ; j < row.size() ; j++) {
            if(c != row[j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}