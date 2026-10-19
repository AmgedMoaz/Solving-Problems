// Sum

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a , b , c;
    while(t--) {
        cin >> a >> b >> c;

        if(a >= b and a >= c) {
            if(b+c == a) {
                cout << "YES\n";
            }else {
                cout << "NO\n";
            }
        }else if(b >= a and b >= c) {
            if(a+c == b) {
                cout << "YES\n";
            }else {
                cout << "NO\n";
            }
        }else {
            if(a+b == c) {
                cout << "YES\n";
            }else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}