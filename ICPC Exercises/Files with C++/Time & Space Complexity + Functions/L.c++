// Enormous Input and Output Test

#include <bits/stdc++.h>
using namespace std;

int solve(int x , int y);

int main() {
// لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--) {
        int a , b;
        cin >> a >> b;
        cout << solve(a,b) << "\n";
    }

    return 0;
}
int solve(int num1 , int num2) {
    return num1*num2;
}