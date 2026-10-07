// Magnets

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

string curr , prev;
int group = 1;
cin >> prev;

for (int i = 1; i < n; i++) {
    cin >> curr;
    if (curr != prev) {
        group++;
    }
    prev = curr;
}

cout << group << endl;

return 0;
}