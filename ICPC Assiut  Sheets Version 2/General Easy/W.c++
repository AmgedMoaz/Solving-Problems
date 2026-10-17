// Mahmoud and Longest Uncommon Subsequence

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a , b;
    cin >> a >> b;

    if( a == b) {
        cout << -1;
    }else {
        cout << max(a.length() , b.length());
    }
    
    return 0;
}