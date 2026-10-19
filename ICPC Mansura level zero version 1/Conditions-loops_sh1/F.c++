// Watermelon

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    if(w == 2) {
        cout << "NO\n";
    }else {
        if(w%2 == 0) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}