// Three Piles

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a , b , c;
        cin >> a >> b >> c;

        if(a == (b-1) && a == (c-2)) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}