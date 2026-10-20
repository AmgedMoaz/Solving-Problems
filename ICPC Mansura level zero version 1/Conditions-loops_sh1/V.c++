// Sum of Odd Integers

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    long long n , k;
    while(t--) {
        cin >> n >> k;

        
        if(n%2 == k%2 and n >= k*k) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}