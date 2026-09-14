// Gravity Flip

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n , x;
        cin >> n >> x;

        long long sum = 0 , maxb = 0;
        for(int i = 0 ; i < n ; i++) {
            long long a;
            cin >> a;

            sum += a;
            maxb += (a+x-1)/x;
        }
        long long minb = (sum+x-1)/x;
        cout << minb << " " << maxb << endl;
    }

    return 0;
}