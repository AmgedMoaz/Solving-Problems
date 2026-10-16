// Ilya and Bank Account

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if(n >= 0) {
        cout << n << endl;;
        return 0;
    }else {
        long long a = n/10;
        long long b = (n/100)*10 + (n%10);

        long long maxOption = max(a,b);
        cout << maxOption << endl;
    }
    
    return 0;
}