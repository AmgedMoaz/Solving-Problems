#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> score(3, 0); 
    // A=0, B=1, C=2

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s; // مثلاً "A>B"
        char L = s[0], R = s[2], op = s[1];
        int idxL = L - 'A', idxR = R - 'A';

        if (op == '>') {
            score[idxL]++; // اليسار أثقل
        } else {
            score[idxR]++; // اليمين أثقل
        }
    }

    // عايزين كل القيم = {0,1,2}
    vector<pair<int,char>> arr;
    arr.push_back({score[0], 'A'});
    arr.push_back({score[1], 'B'});
    arr.push_back({score[2], 'C'});

    sort(arr.begin(), arr.end());

    if (arr[0].first == 0 && arr[1].first == 1 && arr[2].first == 2) {
        for (auto p : arr) cout << p.second;
        cout << "\n";
    } else {
        cout << "Impossible\n";
    }

    return 0;
}