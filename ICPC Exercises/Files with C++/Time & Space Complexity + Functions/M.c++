// 753

#include <bits/stdc++.h>
using namespace std;

bool solve(int number);

int main() {
// لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short x;    cin >> x;
    if(solve(x))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
bool solve(int num) {
    bool flag = false;
    if(num == 3 or num == 5 or num == 7) {
        flag = true;
    }
    return flag;
}