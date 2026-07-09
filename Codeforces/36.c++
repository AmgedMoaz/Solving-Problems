#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int mySum = 0;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        mySum += a[i];
        counter++;

        if (mySum > total - mySum) {
            break;
        }
    }

    cout << counter << endl;

    return 0;
}