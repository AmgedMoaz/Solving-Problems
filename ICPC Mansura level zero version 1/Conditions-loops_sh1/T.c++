// Buy a Shovel

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r;
    cin >> k >> r;

    int counter = 1;
    while (true) {
        int total_price = k * counter;
        
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout << counter << "\n";
            break;
        }

        counter++;
    }

    return 0;
}