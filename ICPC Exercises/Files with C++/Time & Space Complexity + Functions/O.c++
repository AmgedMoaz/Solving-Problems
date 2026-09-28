// Elections

#include <bits/stdc++.h>
using namespace std;

void solve(long long x , long long y , long long z);

int main() {
// لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--) {
        long long x , y , z;
        cin >> x >> y >> z;
        solve(x,y,z);
        cout << "\n";
    }

    return 0;
}
void solve(long long a , long long b , long long c) {
    long long max_value = max(a,max(b,c));

    long ansA = (a > max(b,c)) ? 0 : max_value - a + 1;
    long ansB = (b > max(a,c)) ? 0 : max_value - b + 1;
    long ansC = (c > max(a,b)) ? 0 : max_value - c + 1;

    cout <<ansA <<  " " <<  ansB <<  " " <<  ansC;
}