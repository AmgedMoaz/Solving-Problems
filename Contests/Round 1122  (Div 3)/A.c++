// Good Contest

#include <bits/stdc++.h>
using namespace std;

int main () {

short t;
cin >> t;

while(t--) {
    int n , a1 , a2 , a3;
    cin >> n >> a1 >> a2 >> a3;

    int maxNOtSolved = 0;
    maxNOtSolved = max({ (n-a1) , (n - a2) , (n - a3) });
    cout << maxNOtSolved << "\n";
}

    return 0;
}