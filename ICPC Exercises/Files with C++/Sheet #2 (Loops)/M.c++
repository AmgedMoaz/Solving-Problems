// Find Digits

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--) {
    int n;
    cin >> n;

    int temp = n;
    int counter = 0;
    while(temp > 0) {
        if((temp%10 != 0) && (n%(temp%10) == 0)) {
            counter++;
        }
        temp /= 10;
    }
    cout << counter << endl;
}

    return 0;
}