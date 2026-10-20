// Hard Problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a , b , c;
    cin >> a >> b >> c;

    if(a >= b and a >= c) {
        if(b >= c) {
            cout << c << " " << b << " " << a;
        }else {
            cout << b << " " << c << " " << a;
        }
    }else if(b >= a and b >= c) {
        if(a >= c) {
            cout << c << " " << a << " " << b;
        }else {
            cout << a << " " << c << " " << b;
        }
    }else {
        if(b >= a) {
            cout << a << " " << b << " " << c;
        }else {
            cout << b << " " << a << " " << c;
        }
    }

    return 0;
}