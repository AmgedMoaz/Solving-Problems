// Square Counting

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, s;
        cin >> n >> s;
        cout << s / (n * n) << "\n";
    }
        
    return 0;
}