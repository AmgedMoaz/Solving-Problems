// Sum of Three Integers

#include <bits/stdc++.h>
using namespace std;

int solve(int a , int b);

int main() {

int k , s;
cin >> k >> s;

cout << solve(k,s);

    return 0;
}
int solve(int k , int s) {
    int result = 0;
    for(int x = 0 ; x <= k ; x++) {
        for(int y = 0 ; y <= k ; y++) {
            int z = s-x-y;
            if(z >= 0 and z <= k) {
                result++;
            }
        }
    }
    return result;
}