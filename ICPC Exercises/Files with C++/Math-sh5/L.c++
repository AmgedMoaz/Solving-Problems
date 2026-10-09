// Vasya and Coins

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a , b;
    while(t--) {
        cin >> a >> b;
        long long total = a + (2*b) + 1;
        if(a < 1) {
            cout << 1 << endl;
        }else {
            cout << total << "\n";
        }
    }
        
    return 0;
}