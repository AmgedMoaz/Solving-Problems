// Plus or Minus

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a , b , c ;
    while(t--) {
        cin >> a >> b >> c ;
        if(a + b == c) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
    }

    return 0;
}