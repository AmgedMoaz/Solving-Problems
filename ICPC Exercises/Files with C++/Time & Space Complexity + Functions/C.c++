// Divisibility Problem

#include <bits/stdc++.h>
using namespace std;

int solve(int x , int y);

int main() {

int t;  cin >> t;
while(t--) {
    int a , b;
    cin >> a >> b;
    cout << solve(a,b) << "\n";
}

    return 0;
}
int solve(int num1 , int num2) {
    if(num1%num2 == 0)   return 0;
    else {
        int remainder = num2-(num1%num2);
        return remainder;
    } 
}