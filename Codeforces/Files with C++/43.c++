// 1D Eraser
// Write a code to solve problem by using Greedy Algorithm Technique

#include <bits/stdc++.h>
using namespace std;

int main() {

 short t;
 cin >> t;

 while(t--) {
    int n , k;
    cin >> n >> k;

    string s;
    cin >> s;

    int i = 0 , operation = 0;

    while(i < n) {
        if(s[i] == 'B') {
            operation++;
            i += k;
        } else {
            i++;
        }
    }

    cout << operation << endl;
 }

    return 0;
}