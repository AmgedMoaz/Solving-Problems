// ABC Swap

#include <bits/stdc++.h>
using namespace std;

void solve(short x , short y , short z);

int main() {
// لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short x , y , z;
    cin >> x >> y >> z;
    solve(x,y,z);

    return 0;
}
void solve(short x , short y , short z) {
    short temp1= x;
    x = y;
    y = temp1;

    short temp2 = x;
    x = z;
    z = temp2;

    cout << x << " " << y << " " << z;
}