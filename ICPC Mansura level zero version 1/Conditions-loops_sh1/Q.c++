// Calculating Function

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if(n%2 == 0) {
        n /= 2;
        cout << n << endl;
    }else {
        n /= 2;
        n++;
        cout << (-1*n) << endl;
    }

    return 0;
}