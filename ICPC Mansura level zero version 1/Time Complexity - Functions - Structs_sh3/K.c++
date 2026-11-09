// Be Fast 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l , r , n;
    cin >> l >> r >> n;

    int multiplies = r / n - (l - 1) / n;
    int total_numbers = r - l + 1;
    int count = total_numbers - multiplies;

    cout << count << endl;
    
    return 0;
}