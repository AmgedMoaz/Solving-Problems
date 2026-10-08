// Soldier and Bananas

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k , n , w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;
    int amount_to_borrow = total_cost - n;
    
    if(amount_to_borrow > 0) {
        cout << amount_to_borrow << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}