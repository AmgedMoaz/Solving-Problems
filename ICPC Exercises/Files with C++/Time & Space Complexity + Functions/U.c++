// POW

#include <bits/stdc++.h>
using namespace std;

void solve(long long num1 , long long num2 , long long num3);

int main() {
    // لزيادة سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x , y , z;
    cin >> x >> y >> z;

    solve(x,y,z);

    return 0;
}
void solve(long long a , long long b , long long c) {
    if(c%2 == 0) {
        long long absA = abs(a);
        long long absB = abs(b);
        if (absA > absB) {
            cout << ">" << endl;
        } else if (absA < absB) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
    }else {
        if(a > b) {
            cout << ">" << endl;
        }else if(a < b) {
            cout << "<" << endl;
        }else {
            cout << "=" << endl;
        }
    }
}