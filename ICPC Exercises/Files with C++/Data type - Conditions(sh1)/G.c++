// Grouping
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    // مصفوفة تحدد رقم المجموعة لكل شهر من 1 إلى 12
    int group[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};

    if (group[x] == group[y]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}