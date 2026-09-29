// Dislike of Threes

#include <bits/stdc++.h>
using namespace std;

void solve(int n);

int main() {
// لزيادة سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;    cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }

    return 0;
}
void solve(int num) {
    int currentNumber = 0;
    int count = 0;

    while(count < num) {
        currentNumber++;
        if(currentNumber%3 != 0 and currentNumber%10 != 3) {
            count++;
        }
    }
    cout << currentNumber << endl;
}