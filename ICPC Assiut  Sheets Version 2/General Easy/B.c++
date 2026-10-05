// Watermelon

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

if(n <= 2) {
    cout << "NO" << endl;
} else if(n % 2 == 0) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}

    return 0;
}