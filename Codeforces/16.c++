#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> teams(n);
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second; // home, away
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {       // host
        for (int j = 0; j < n; j++) {   // guest
            if (i == j) continue;
            if (teams[i].first == teams[j].second) {
                counter++;
            }
        }
    }

    cout << counter << endl;
    return 0;
}