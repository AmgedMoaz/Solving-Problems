// log2(N)

#include <bits/stdc++.h>
using namespace std;

long long solve(long long num);

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

long long n;    cin >> n;
cout << solve(n) << endl;

    return 0;
}
long long solve(long long num) {
    long counter = 0;
    while(num >= 2) {
        num /= 2;
        counter++;
    }
    return counter;
}